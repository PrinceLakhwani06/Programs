#MASTER YODA: Given a sentence, return a sentence with the words reversed
def myfunc(text):
    #different way to do
    '''return ' '.join(text.split()[::-1])
a=myfunc('hello brother how are you')
print(a)'''
    #different way to do
    mylist=text.split()
    reverse_list=mylist[::-1]
    return ' '.join(reverse_list)
a=myfunc('hello moto and mini')
print(a)