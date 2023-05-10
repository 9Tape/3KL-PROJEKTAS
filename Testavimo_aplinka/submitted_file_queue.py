from celery import Celery
from queue import Queue
import subprocess
import time
import os

### Celery config ###
app = Celery('submitted_file_queue', broker='redis://localhost:6379/0', backend='redis://localhost:6379/0')
app.conf.task_concurrency = 5

### Queues and sets ###
Submitted_code_set = set()
Availible_testing_environment = Queue()
env_numbers = list(range(1, 6))
for env_number in env_numbers: Availible_testing_environment.put(env_number)


@app.task
def compile_code(user_id, problem_id, submitted_code):

    ## Jei siuo metu kompiliuojamas kitas vartotojo pateiktas kodas
    if (user_id, problem_id) in Submitted_code_set:
        return -1

    Submitted_code_set.add((user_id, problem_id))
    Environment_id = Availible_testing_environment.get()

    ## Vartotojo pateiktas kodas paverčiamas į cpp programą
    file_path = f'/home/server/Testavimo_aplinka/Aplinka{Environment_id}/programa.cpp'

    if os.path.exists(file_path):
        try: os.remove(file_path)
        except:
            Submitted_code_set.remove((user_id, problem_id))
            Availible_testing_environment.put(Environment_id)
            return 0

    with open(file_path, 'w') as f:
        f.write(submitted_code)

    ## Failas sukompiliuojamas ir paleidžiamas
    try:
        default_dir = os.getcwd()
        os.chdir(f'/home/server/Testavimo_aplinka/Aplinka{Environment_id}/')
        result = subprocess.run(['python3', f'/home/server/Testavimo_aplinka/Aplinka{Environment_id}/kompiliatorius.py', str(22), str(64), str(1), str(problem_id)], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        output = result.stdout.decode() + result.stderr.decode()
    except Exception as e:
        os.chdir(default_dir)
        Submitted_code_set.remove((user_id, problem_id))
        Availible_testing_environment.put(Environment_id)
        return e

    ## Testavimo aplinka pridedama prie laisvu aplinku saraso
    os.chdir(default_dir)
    Submitted_code_set.remove((user_id, problem_id))
    Availible_testing_environment.put(Environment_id)

    ## Gražiname kompiliavimo rezultatus
    return output