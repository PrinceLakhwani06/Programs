#Write a Python function that takes a list and returns a new list with unique elements of the first list.
def mylist(list_here):
    return set(list_here)
result=mylist([1,1,1,11,2,2,2,2,2,3,3,3,34,55])
print(result)