#SPY GAME: Write a function that takes in a list of integers and returns True if it contains 007 in order
def spy_game(nums):

    code = [0,0,7,'x']
    
    for num in nums:
        if num == code[0]:
            code.pop(0)   # code.remove(num) also works
       
    if len(code) == 1:
        return 1 #(True)
    else:
        return 2 #(False)
    
a=spy_game([9,8,0,8,6,0,8,4,7])
print(a)