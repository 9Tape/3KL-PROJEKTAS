from flask import Blueprint, render_template, request, flash, jsonify, send_file, redirect, url_for
from flask_login import login_required, current_user
from .models import Problems
from . import db
import json
import shutil
import subprocess
import os
import queue
import time

views = Blueprint('views', __name__)

#############################################
Submitted_code_set = set()
Submitted_code_queue = queue.Queue()
Availible_testing_environments = queue.Queue()

Availible_testing_environments.put(1)
Availible_testing_environments.put(2)
Availible_testing_environments.put(3)
Availible_testing_environments.put(4)
Availible_testing_environments.put(5)
#############################################


@views.route('/', methods=['GET', 'POST'])
@login_required
def home():
    problems = Problems.query.all()
    return render_template("home.html", user=current_user, problems=problems)

@views.route('/pdf/<problem_id>')
@login_required
def pdf(problem_id):
    path = f'/home/server/PDF_Salygos/{problem_id}.pdf'
    return send_file(path)

@views.route('/admin')
@login_required
def admin():
    if current_user.urole == "SERVER-ADMIN":
        return render_template("server-admin.html", user=current_user)
    else:
        return redirect(url_for('views.home'))

@views.route('/school-admin')
@login_required
def school_admin():
    if current_user.urole == "SCHOOL-ADMIN":
        return render_template("school-admin.html", user=current_user)
    else:
        return redirect(url_for('views.home'))

@views.route('/new-task', methods=['GET', 'POST'])
@login_required
def new_task():
    if current_user.urole == "SCHOOL-ADMIN" and request.method == 'POST':

        taskName = request.form.get('taskName')
        timeLimit = request.form.get('timeLimit')
        memoryLimit = request.form.get('memoryLimit')

        if int(timeLimit) > 5 or int(timeLimit) < 1:
            flash('Laiko limitas galimas iki 5 sekundžių.', category='error')
            return render_template("new-task.html", user=current_user)
        elif int(memoryLimit) > 500 or int(memoryLimit) < 1:
            flash('Laiko limitas galimas iki 500 mb.', category='error')
            return render_template("new-task.html", user=current_user)
        elif len(taskName) > 50:
            flash('Per ilgas uždavinio pavadinimas.', category='error')
            return render_template("new-task.html", user=current_user)
        else:
            new_problem = Problems(name=taskName, timeLimit=timeLimit, memoryLimit=memoryLimit)
            db.session.add(new_problem)
            db.session.commit()
            flash('Naujas uždavinys sukurtas sėkmingai!', category='success')
            return redirect(url_for('views.home'))

    elif current_user.urole == "SCHOOL-ADMIN" and request.method == 'GET':
        return render_template("new-task.html", user=current_user)
    else:
        return redirect(url_for('views.home'))

@views.route('/problem/<problem_id>', methods=['GET', 'POST'])
@login_required
def show_item_info(problem_id):

    if request.method == 'POST' and not (current_user.id, problem_id) in Submitted_code_set:

        Submitted_code_set.add((current_user.id, problem_id))
        Submitted_code_queue.put((current_user.id, problem_id))

        # VARTOTOJAS LAUKIA, KOL ATSILAISVINS VIENA IS TESTAVIMO APLINKU
        while Availible_testing_environments.empty() or (not Availible_testing_environments.empty() and Submitted_code_queue.queue[0] != (current_user.id, problem_id)):
            time.sleep(2)
            pass

        Environment_nr = Availible_testing_environments.get_nowait()
        Submitted_code_queue.get()

        # # PAIMTI KODA TEKSTO FORMATU IR ISSAUGOTI JI KAIP "PROGRAMA.CPP" FAILA
        submitted_code = request.form.get('submitted_code')
        with open('programa.cpp', 'w') as f:
            f.write(submitted_code)

        shutil.move('/home/server/WebServer/programa.cpp', f'/home/server/Testavimo_aplinka/Aplinka{Environment_nr}/')
        default_dir = os.getcwd()
        os.chdir(f'/home/server/Testavimo_aplinka/Aplinka{Environment_nr}/')

        # SUKOMPILIUOTI IR PALEISTI SU KOMPILIATORIUM
        try:
            result = subprocess.run(['python3', f'/home/server/Testavimo_aplinka/Aplinka{Environment_nr}/kompiliatorius.py', str(22), str(64), str(1), str(problem_id)], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            output = result.stdout.decode() + result.stderr.decode()
        except Exception as e:
            output = str(e)

        os.chdir(default_dir)
        Submitted_code_set.remove((current_user.id, problem_id))
        Availible_testing_environments.put(Environment_nr)
        return render_template('output.html', output=output, user=current_user)

    elif request.method == 'GET':
        return render_template('problem.html', problem_id=problem_id, user=current_user)
    else:
        flash('Šiuo metu testuojamas kitas pateiktas kodas šiam uždaviniui.', category='error')
        return render_template('problem.html', problem_id=problem_id, user=current_user)
