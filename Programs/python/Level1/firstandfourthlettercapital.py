#OLD MACDONALD: Write a function that capitalizes the first and fourth letters of a name
def myfunc(name):
    result = ''
    for a in range(len(name)):
        if a==0 or a==3:
            result+=name[a].upper()
        else:
            result+=name[a]
    return result
    #different way to do
    '''if len(name) > 3:
        return name[:3].capitalize() + name[3:].capitalize()
    else:
        return 'Name is too short!'''
k=myfunc('macdonalds')   
print(k)         