from flask import Blueprint, render_template, request, flash, jsonify, send_file, redirect, url_for
from flask_login import login_required, current_user
from .models import Problems
from .models import User
from . import db
import json
import shutil
import subprocess
import os
import sys
sys.path.append('/home/server/Testavimo_aplinka')
from submitted_file_queue import compile_code

views = Blueprint('views', __name__)
Submitted_code_set = set()


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


@views.route('/problem/<problem_id>', methods=['GET', 'POST'])
@login_required
def show_item_info(problem_id):
    if request.method == 'POST' and not (current_user.id, problem_id) in Submitted_code_set:

        Submitted_code_set.add((current_user.id, problem_id))
        submitted_code = request.form.get('submitted_code')
        output = compile_code(current_user.id, problem_id, submitted_code)
        Submitted_code_set.remove((current_user.id, problem_id))

        if output == -1:
            flash('Šiuo metu testuojamas kitas pateiktas kodas šiam uždaviniui.', category='error')
            return render_template('problem.html', problem_id=problem_id, user=current_user)
        elif output == 0:
            flash('Testavimo klaida. Susisiekite su mokyklos administratoriumi.', category='error')
            return render_template('problem.html', problem_id=problem_id, user=current_user)
        
        return render_template('output.html', output=output, user=current_user)

    elif request.method == 'GET':
        return render_template('problem.html', problem_id=problem_id, user=current_user)
    else:
        flash('Šiuo metu testuojamas kitas pateiktas kodas šiam uždaviniui.', category='error')
        return render_template('problem.html', problem_id=problem_id, user=current_user)



@views.route('/users')
@login_required
def users():
    if current_user.urole == "SERVER-ADMIN":
        user_list = User.query.all()
        return render_template("users.html", user=current_user, user_list=user_list)
    else:
        return redirect(url_for('views.home'))

@views.route('/users/<user_id>')
@login_required
def user():
    if current_user.urole == "SERVER-ADMIN":
        # conn = get_db()
        # cursor = conn.cursor()
        # query = "SELECT * FROM users WHERE id = ?"
        # cursor.execute(query, (user_id,))
        # user_data = cursor.fetchone()
        return render_template("users.html", user=current_user, user_list=user_list)
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