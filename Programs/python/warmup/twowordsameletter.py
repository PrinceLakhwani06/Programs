#ANIMAL CRACKERS: Write a function takes a two-word string and returns True if both words begin with same letter
def animal(words):
    for index,item in enumerate(words):
        if item==' ':
            a=index
        else:
            pass
    if words[0].lower()==words[a+1].lower():
        return 1
    else:
        return 0  
e=animal('kome Hello')      
print(e)            