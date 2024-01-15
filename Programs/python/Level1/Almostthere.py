#ALMOST THERE: Given an integer n, return True if n is within 10 of either 100 or 200
def myfunc(number):
    if number>90 and number<111:
        return True
    elif number>190 and number<211:
        return True
    else:
        print('not that number')
    #differet solution
    '''def almost_there(n):
    return ((abs(100 - n) <= 10) or (abs(200 - n) <= 10))'''    
myfunc(104)        
        