# VISI LIBRARY
import subprocess
import psutil
import time

# NUSTATYTI PROGRAMOS NAUDOJAMU RESURSU LIMTUS
kompiliavimoLaikoLimitas = 10 # SEKUNDES
paleidimoLaikoLimitas = 1 # SEKUNDES
atmintiesLimitas = 64 * 1024 * 1024 # BAITAI (64MB)

# PAKOMPILIUOTI PROGRAMA SU NUSTATYTAIS LIMITAIS
try:
    # PIRMIAUSIA PALEISTI SU ILGESNIUS LAIKU, DEL INFINITE LOOP'U
    process = subprocess.run(["g++", "programa.cpp"],
                              check = True,
                              timeout = kompiliavimoLaikoLimitas * 2,
                              stdout = subprocess.PIPE,
                              stderr = subprocess.PIPE)
    
    # PALEISTI JAU PAKOMPILIUOTA PROGRAMA IR GAUTI REZULTATUS SU TRUMPESNIU LAIKU
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
                break

            # PATIKRINTI AR PROGRAMA VIRSIJO ATMINTIES LIMITA
            sunaudotaAtmintis = psutil.Process(process.pid).memory_info().rss
            if sunaudotaAtmintis > atmintiesLimitas:
                process.kill()
                print("Programa viršijo atminties limitą")
                break

        # KAI PROGRAMA BAIGE, GAUTI REZULTATUS
        rezultatai = process.stdout.read().decode().strip()
        if rezultatai:
            print(f"Rezultatai:\n{rezultatai}")
        else:
            print("Nėra rezultatų failo")
    else:
        # SPAUSDINTI KOMPILIACIJOS ERROR'US
        print(f"Klaida:\n{process.stderr.decode().strip()}")

except subprocess.TimeoutExpired as e:
    # SPAUSDINTI LAIKO VIRSIJIMO ERROR'A
    print(e)
except subprocess.CalledProcessError as e:
    # SPAUSDINTI KOMPILIACIJOS AR PROGRAMOS ERROR'A
    print(f"Klaida:\n{e.stderr.decode().strip()}")
except Exception as e:
    # JEIGU KAZKOKIO KITOS KLAIDOS
    print(f"Klaida: {e}")
