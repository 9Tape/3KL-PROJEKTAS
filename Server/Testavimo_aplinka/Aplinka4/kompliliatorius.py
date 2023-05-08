import subprocess
import resource
import os
import sys

Testu_sk = int(sys.argv[1]) # Globalus kintamasis - testu skaicius
Atminties_limitas = int(sys.argv[2]) * 1048576 # Globalus kintamasis - atminties limitas
Laiko_limtas = int(sys.argv[3]) # Globalus kintamasis - laiko limitas
Uzdavinio_id = int(sys.argv[4])

def cpp_kompiliatorius(programa):
    kompiliuok_cmd = ['g++', '-o', 'programa', programa]
    try:
        subprocess.check_output(kompiliuok_cmd, stderr=subprocess.STDOUT)
        return True  # Kompiliavimas pavyko
    except subprocess.CalledProcessError as e:
        error_msg = e.output.decode()
        return False  # Kompiliavimas nepavyko


def paleisk_programa(programa, duomenu_failas):

    ## paleisk_programa() grazina dvi reiksmes - rezultata ir klaidos koda
    ## Klaidos kodai: 0 (Klaidos nera), 1 (Laiko limitas), 2 (Atminties limitas), 3 (Nenumatyta klaida)
    
    paleisk_cmd = ['./' + programa]
    try:
        with open(duomenu_failas) as f:
            duomenu_failas = f.read()
        rezultatai = subprocess.check_output(paleisk_cmd, input=duomenu_failas.encode(), stderr=subprocess.STDOUT)
        return rezultatai.decode(), 0
    except subprocess.CalledProcessError: return '', 1
    except MemoryError: return '', 2
    except: return '', 3


def palygink_rezultatus(rezultatai, rezultatu_failas):
    # Graziname TRUE, jei programos ir oficialus rezultatai sutampa
    with open(rezultatu_failas) as f:
        rezultatu_duomenys = f.read()
    return rezultatai.strip() == rezultatu_duomenys.strip()


## Kompiliuojame C++ programa
if not cpp_kompiliatorius("programa.cpp"):
    print("Nesikompiliuoja")
    os.remove("/home/server/Testavimo_aplinka/Aplinka4/programa.cpp")
    exit()

## Nustatome laiko bei atminties limitus
resource.setrlimit(resource.RLIMIT_CPU, (Laiko_limtas, Laiko_limtas))
resource.setrlimit(resource.RLIMIT_AS, (Atminties_limitas, Atminties_limitas))

## Jei programa kompiliuojasi, paleidziame programa
for Testo_id in range(1, Testu_sk+1):

    duomenu_failas = f'/home/server/Testai/{Uzdavinio_id}/{Testo_id}.in'
    rezultatu_failas = f'/home/server/Testai/{Uzdavinio_id}/{Testo_id}.sol'

    # Paleidziame programa su testo duomenimis
    rezultatai, klaidos_kodas = paleisk_programa("programa", duomenu_failas)
    
    # Jei programos paleidimo metu atsirado klaidu
    if klaidos_kodas == 1:
        print("Testas", Testo_id, "viršytas laiko limitas")
        continue
    if klaidos_kodas == 2:
        print("Testas", Testo_id, "viršytas atminties limitas")
        continue
    if klaidos_kodas == 3:
        print("Testas", Testo_id, "programos klaida")
        continue

    # Palyginame rezultatus su oficialiais rezultatais
    if palygink_rezultatus(rezultatai, rezultatu_failas):
        print("Testas", Testo_id, "tinka")
    else:
        print("Testas", Testo_id, "netinka")

## Istriname nereikalingus failus
os.remove("/home/server/Testavimo_aplinka/Aplinka4/programa")
os.remove("/home/server/Testavimo_aplinka/Aplinka4/programa.cpp")
