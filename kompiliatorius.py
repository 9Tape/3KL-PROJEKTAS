import subprocess
import resource

Testu_sk = 50 # Globalus kintamasis - testu skaicius
Atminties_limitas = 64 * 1048576 # Globalus kintamasis - atminties limitas

def nustatyk_atminties_limita(atminties_limitas):
    resource.setrlimit(resource.RLIMIT_AS, (atminties_limitas, atminties_limitas))

def cpp_kompiliatorius(programa):
    kompiliuok_cmd = ['g++', '-o', 'programa', programa]
    try:
        subprocess.check_output(kompiliuok_cmd, stderr=subprocess.STDOUT)
        return True  # Kompiliavimas pavyko
    except subprocess.CalledProcessError as e:
        error_msg = e.output.decode()
        return False  # Kompiliavimas nepavyko


def paleisk_programa(programa, duomenu_failas):
    paleisk_cmd = ['./' + programa]
    nustatyk_atminties_limita(Atminties_limitas) # Nustatome atminties limita
    try:
        with open(duomenu_failas) as f:
            duomenu_failas = f.read()
        rezultatai = subprocess.check_output(paleisk_cmd, input=duomenu_failas.encode(), stderr=subprocess.STDOUT)
        return rezultatai.decode() # Jei programa pasileido, graziname rezultatus
    except subprocess.CalledProcessError as e:
        klaidos_kodas = e.output.decode()
        return klaidos_kodas # Programa nepasileido, graziname klaidos koda


def palygink_rezultatus(rezultatai, rezultatu_failas):
    with open(rezultatu_failas) as f:
        rezultatu_duomenys = f.read()
    return rezultatai.strip() == rezultatu_duomenys.strip() # Graziname TRUE, jei programos ir oficialus rezultatai sutampa


## Kompiliuojame C++ programa
if not cpp_kompiliatorius("programa.cpp"):
    print("Nesikompiliuoja")
    exit()

## Jei programa kompiliuojasi, paleidziame programa
for Testo_id in range(1, Testu_sk+1):

    duomenu_failas = f'{Testo_id}.in'
    rezultatu_failas = f'{Testo_id}.sol'

    # Paleidziame programa su testo duomenimis
    rezultatai = paleisk_programa("programa", duomenu_failas)

    # Palyginame rezultatus su oficialiais rezultatais
    if palygink_rezultatus(rezultatai, rezultatu_failas):
        print("Testas", Testo_id, "tinka")
    else:
        print("Testas", Testo_id, "netinka")