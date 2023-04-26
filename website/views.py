from flask import Blueprint, render_template, request, flash, jsonify, send_file
from flask_login import login_required, current_user
from .models import Note
from . import db
import json
import shutil
import subprocess
import os

views = Blueprint('views', __name__)

@views.route('/', methods=['GET', 'POST'])
@login_required
def home():
    problems = Note.query.all()
    return render_template("home.html", user=current_user, problems=problems)


@views.route('/pdf/<problem_id>')
@login_required
def pdf(problem_id):
    path = f'/home/server/PDF_Salygos/{problem_id}.pdf'
    return send_file(path)


@views.route('/problem/<problem_id>', methods=['GET', 'POST'])
@login_required
def show_item_info(problem_id):

    if request.method == 'POST':

        # PAIMTI KODA TEKSTO FORMATU IR ISSAUGOTI JI KAIP "PROGRAMA.CPP" FAILA
        submitted_code = request.form.get('submitted_code')
        with open('programa.cpp', 'w') as f:
            f.write(submitted_code)

        shutil.move('/home/server/WebServer/programa.cpp', '/home/server/Testavimo_aplinka/Aplinka1/')
        default_dir = os.getcwd()
        os.chdir('/home/server/Testavimo_aplinka/Aplinka1')

        # SUKOMPILIUOTI IR PALEISTI SU "COMPILER.PY"
        try:
            result = subprocess.run(['python3', '/home/server/Testavimo_aplinka/Aplinka1/kompiliatorius.py', str(22), str(64), str(1), str(problem_id)], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            output = result.stdout.decode() + result.stderr.decode()
        except Exception as e:
            output = str(e)

        os.chdir(default_dir)

        # SUGENERUOTI OUTPUT'A WEBSERVERI
        return render_template('output.html', output=output, user=current_user)

    return render_template('problem.html', problem_id=problem_id, user=current_user)
