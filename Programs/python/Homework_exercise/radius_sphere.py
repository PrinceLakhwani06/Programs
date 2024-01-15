#Write a function that computes the volume of a sphere given its radius.
def myfunc(radius):
    volume=(4/3)*22/7*(radius**3)
    return volume
print('volume of sphere is {}'.format(myfunc(2)))