import subprocess

Test_case_nr = int(input("Testu skaicius: "))
Tinkanciu_testu_sk = 0

# Compile the program
subprocess.run(['g++', '-o', 'programa', 'programa.cpp'])

# Run each test case
for test_case_id in range(1, Test_case_nr+1):

	# Read the test case input and output files
    with open(f'{test_case_id}.in') as input_file:
        test_input = input_file.read()
    with open(f'{test_case_id}.sol') as output_file:
        expected_output = output_file.read()

    # Call the program with the test input
    if test_case_id != 21:
    	process = subprocess.run(['./programa'], input=test_input.encode(), capture_output=True)
    	output = process.stdout

    # Use diff to compare the output with the expected results
    result = subprocess.run(["diff", f'{test_case_id}.sol', "rezultatai.txt"], stdout=subprocess.PIPE)
    if result.stdout:
        print(test_case_id, " Netinka")
        print(result.stdout.decode())
    else:
        print(test_case_id, " Tinka")
        Tinkanciu_testu_sk += 1

    if test_case_id == Test_case_nr:
        print(Tinkanciu_testu_sk, "/", Test_case_nr, "(", round((Tinkanciu_testu_sk*100)/Test_case_nr), "%)")
