#Write a function that checks whether a number is in a given range (inclusive of high and low)
def myfunc(num,low,high):
    if num>=low and num<=high:
        print('num in between')
    else:
        print('not in between')
myfunc(8,7,22)             