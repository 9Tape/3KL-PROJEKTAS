# VISI LIBRARY
import subprocess
import psutil
import time

# NUSTATYTI PROGRAMOS NAUDOJAMU RESURSU LIMTUS
paleidimoLaikoLimitas = 1 # SEKUNDES
atmintiesLimitas = 64 * 1024 * 1024 # BAITAI (64MB)

# PAKOMPILIUOTI PROGRAMA SU NUSTATYTAIS LIMITAIS
try:
    jauBuvoErroras = False  # SEKTI AR JAU BUVO SURASTAS KAZKOKS ERROR'AS

    process = subprocess.run(["g++", "programa.cpp"],
                              check = True,
                              timeout = paleidimoLaikoLimitas,
                              stdout = subprocess.PIPE,
                              stderr = subprocess.PIPE)
    
    # PALEISTI JAU PAKOMPILIUOTA PROGRAMA IR GAUTI REZULTATUS
    if process.returncode == 0:
        # PALEISTI PROGRAMA ATSKIRAME PROCESE
        process = subprocess.Popen(["./a.out"],
                                   stdout = subprocess.PIPE,
                                   stderr = subprocess.PIPE)
        
        # STEBETI PROGRAMOS LAIKA IR ATMINTI
        pradziosLaikas = time.monotonic()
        naudojamaAtmintis = psutil.Process(process.pid).memory_info().rss
        while True:
            # PATIKRINTI AR PROGRAMA BAIGE DARBA
            returncode = process.poll()
            if returncode is not None:
                break

            # PATIKRINTI AR PROGRAMA VIRSIJO LAIKO LIMITA
            praejasLaikas = time.monotonic() - pradziosLaikas
            if praejasLaikas > paleidimoLaikoLimitas:
                process.kill()
                print("Programa viršijo laiko limitą")
                jauBuvoErroras = True  # Error'as buvo, nebespausdinti "Nera rezultatu failo"
                break

            # PATIKRINTI AR PROGRAMA VIRSIJO ATMINTIES LIMITA
            sunaudotaAtmintis = psutil.Process(process.pid).memory_info().rss
            if sunaudotaAtmintis > atmintiesLimitas:
                process.kill()
                print("Programa viršijo atminties limitą")
                jauBuvoErroras = True  # Error'as buvo, nebespausdinti "Nera rezultatu failo"
                break

        # KAI PROGRAMA BAIGE, GAUTI REZULTATUS
        rezultatai = process.stdout.read().decode().strip()
        if rezultatai:
            print(f"Rezultatai:\n{rezultatai}")
        elif not jauBuvoErroras:  # Nei error'u, nei outputo nebuvo, spausdinti "Nera rezultatu failo"
            print("Nėra rezultatų failo")
    else:
        # SPAUSDINTI KOMPILIACIJOS ERROR'US
        print(f"Klaida:\n{process.stderr.decode().strip()}")
        jauBuvoErroras = True  # Error'as buvo, nebespausdinti "Nera rezultatu failo"

except subprocess.TimeoutExpired as e:
    # SPAUSDINTI LAIKO VIRSIJIMO ERROR'A
    print(e)

except subprocess.CalledProcessError as e:
    # SPAUSDINTI KOMPILIACIJOS ERROR'US
    print(f"Klaida:\n{e.stderr.decode().strip()}")
    jauBuvoErroras = True  # Error'as buvo, nebespausdinti "Nera rezultatu failo"
