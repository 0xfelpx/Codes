import random, string, os

os.system('cls')
pass_amount = int(input('Enter many passwords you want to generate: '))
pass_length = int(input('Enter password length: '))

chars = string.ascii_letters + string.digits + string.punctuation
os.system('cls')
for a in range(pass_amount): # index amount
    password = ''

    for l in range(pass_length): # index length
        password = password + random.choice(chars)

    print('Password {} > {}'.format(a, password)) # result