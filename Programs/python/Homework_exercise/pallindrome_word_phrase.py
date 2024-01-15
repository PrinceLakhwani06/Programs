#Write a Python function that checks whether a word or phrase is palindrome or not.
def func(string):
    b=0
    a=''
    for item in string:
        if item==' ':
            b=b+1
        else:
            pass    
    if b>=1:
        a=string.replace(' ','')
    else:
        a=string
    if a==a[::-1]:
        print('pallindrome')
    else:
        print('not')    
func('helleh')                       