'''LESSER OF TWO EVENS: Write a function that returns the lesser of two given numbers 
if both numbers are even, but returns the greater if one or both numbers are odd'''
def myfunc(num1,num2):
    if num1%2==0 and num2%2==0:
        if num1>num2:
            print(num2)
        else:
            print(num1)
    else:
        if num1>num2:
            print(num1)
        else:
            print(num2)   
a=int(input('enter the 1st numbers: '))
b=int(input('enter the 2nd number: '))
myfunc(a,b)                    