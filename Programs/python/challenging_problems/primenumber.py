def prime(number):
    a=1
    b=0
    while a<=number:
        if number%a==0:
            b+=1
        else:
            pass
        a=a+1
    return b    
a = prime(18)
if a==2: 
    print('number is prime')       
else:
    print('number is not prime')        
     