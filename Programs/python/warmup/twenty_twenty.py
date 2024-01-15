'''MAKES TWENTY: Given two integers, return True if the sum of the integers is 20 or if one of the integers is 20.
If not, return False'''
def myfunc(num1,num2):
    if num1==20 or num2==20:
        return True
    elif num1+num2==20:
        return True
    else:
        return False
myfunc(15,5)