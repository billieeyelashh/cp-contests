import os 
import sys

# Compile a cpp file 
def compile_cpp(file_name):
    os.system("g++ -std=c++11 -o " + file_name + " " + file_name + ".cpp")


# Run a cpp file
def run_cpp(file_name):
    os.system("./" + file_name)

# Run a cpp file with input
def run_cpp_with_input(file_name, input_file):
    os.system("./" + file_name + " < " + input_file)
        
