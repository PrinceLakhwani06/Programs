#Write a Python function that accepts a string and calculates the number of upper case letters and lower case letters.
def myfunc(string):
    b=0
    c=0
    for item in string:
        if item>='a' and item<='z':
            b+=1
        elif item>='A' and item<='Z':
            c+=1
        else:
            pass
    print('number of small leters = {}'.format(b))
    print('numberof capital letters = {}'.format(c))     
myfunc('Hello Mr. Rogers, how are you this fine Tuesday?')           