import os
while True:
    os.system('cls')
    value = float(input('enter value:\n'))
    porcent = float(input('\nenter porcent value for calculation:\n'))
    result = value * porcent / 100
    print(f'result:\n {result}\nleft:\n',value-result)
    pause = input('\npress enter to continue...')