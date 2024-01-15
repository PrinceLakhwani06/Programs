from random import shuffle
def shuffle_list(anylist):
    shuffle(anylist)
    return anylist

def player_guess():
    guess = ''
    while guess not in ['0','1','2']:
        guess = input("Pick a number: 0,1 or 2")
        
    return int(guess)
    
def check_guess(mylist,guess):
    if mylist[guess]=='O':
        print("Correct!")
        print(mylist)
    else:
        print("wrong Guess!")
        print(mylist)
        
mylist = ['','O','']
guess = player_guess()
mixedup_list = shuffle_list(mylist)
check_guess(mixedup_list,guess)                 
