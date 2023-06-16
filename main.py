import subprocess

compiled = False
tests = 1

def compile_and_run(file, is_generator = False):
    compile_command = ["g++", file, "-o", "output"]
    subprocess.run(compile_command, check=True)

    run_command = ["./output"]
    subprocess.run(run_command, check=True)
    
def compare():
    with open('correctOutput.txt', 'r') as file:
        data1 = file.readlines()
        
    with open('testOutput.txt', 'r') as file:
        data2 = file.readlines()
    
    print('--------------------------------------')
    # print(data1)
    # print(data2)
    # with open('input.txt', 'r') as file:
    #     data = file.readlines()
    #     print(data)
    
    if data1 == data2:
        print(f'test #{tests} correct')
    else:
        print(f'test #{tests} WRONG')
        print('Input : ')
        
        with open('input.txt', 'r') as file:
            data = file.readlines()
            print(data)
            
        print('expected:')
        print(data1)
        print('found:')
        print(data2)
        exit(0)
    print('--------------------------------------')

def main():
    
    global tests
    global compiled
    
    while tests <= 100:
        compile_and_run('Generator.cpp',True)
        compile_and_run('test.cpp')
        compile_and_run('correct.cpp')
        compare()
        compiled = True
        tests += 1

if __name__ == '__main__':
    main()