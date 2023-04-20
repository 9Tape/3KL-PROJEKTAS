from flask import Flask, request, render_template
import subprocess

app = Flask(__name__)

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':
        # PAIMTI KODA TEKSTO FORMATU IR ISSAUGOTI JI KAIP "PROGRAMA.CPP" FAILA
        code = request.form['code']
        with open('programa.cpp', 'w') as f:
            f.write(code)
        
        # SUKOMPILIUOTI IR PALEISTI SU "COMPILER.PY"
        try:
            result = subprocess.run(['python', 'compiler.py'], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            output = result.stdout.decode() + result.stderr.decode()
        except Exception as e:
            output = str(e)
        
        # SUGENERUOTI OUTPUT'A WEBSERVERI
        return render_template('output.html', output=output)
    
    return render_template('index.html') # PRADINIS WEBSERVER'IO VAIZDAS

if __name__ == '__main__':
    app.run(debug=True)
