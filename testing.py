import subprocess
import psutil
import time
import os

Testu_sk = 1
Tinkanciu_testu_sk = 0
Laiko_limitas = 1 # SEKUNDES
Atminties_limitas = 64 * 1024 * 1024 # BAITAI (64MB)

# Sukompiliuojame programa
try:
    process = subprocess.run(["g++", "programa.cpp"], check = True, stdout = subprocess.PIPE, stderr = subprocess.PIPE)
except subprocess.CalledProcessError as error:
    print("Programa nesikompiliuoja")

# Tikriname programa su testais
for Testo_id in range(1, Testu_sk+1):

	# Nuskaitome duomenu ir rezultatu failus
    with open(f'{Testo_id}.in') as Duomenu_failas:
        Duomenys = Duomenu_failas.read()
    with open(f'{Testo_id}.sol') as Rezultatu_failas:
        Rezultatai = Rezultatu_failas.read()

    # Paleidziame sukompiliuota programa
    process = subprocess.Popen(["./a.out"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = process.communicate(input=Duomenys.encode())

    # Laukiame programos atsako
    naudojamaAtmintis = psutil.Process(process.pid).memory_info().rss
    pradziosLaikas = time.monotonic()
    jauBuvoErroras = False

    while True:
            
        # Tikriname, ar programa baige darba
        returncode = process.poll()
        if returncode is not None: break

        # PATIKRINTI AR PROGRAMA VIRSIJO LAIKO LIMITA
        praejasLaikas = time.monotonic() - pradziosLaikas
        if praejasLaikas > Laiko_limitas:
            process.kill()
            print("Testas ", Testo_id, ": virsytas laiko limitas")
            jauBuvoErroras = True  # Error'as buvo, nebespausdinti "Nera rezultatu failo"
            break

        # PATIKRINTI AR PROGRAMA VIRSIJO ATMINTIES LIMITA
        sunaudotaAtmintis = psutil.Process(process.pid).memory_info().rss
        if sunaudotaAtmintis > Atminties_limitas:
            process.kill()
            print("Testas ", Testo_id, ": virsytas atminties limitas")
            jauBuvoErroras = True  # Error'as buvo, nebespausdinti "Nera rezultatu failo"
            break

    # Tikriname rezultatus
    if not os.path.isfile("rezultatai.txt"):
        print("Nėra rezultatų failo")
        continue

    rezultatai = subprocess.run(["diff", f'{Testo_id}.sol', "rezultatai.txt"], stdout=subprocess.PIPE)
    
    if rezultatai.stdout:
        print("Testas", Testo_id, ": netinka rezultatu failas")
        print(rezultatai.stdout.decode())
    else:
        print("Testas", Testo_id, ": tinka")
