#Write a Python function to multiply all the numbers in a list.
def mylist(list_here):
    a=1
    for item in list_here:
        a*=item
    print(a)
mylist([1,2,3,4,5,9])        