#Given a list of ints, return True if the array contains a 3 next to a 3 somewhere.
def myfunc(mylist):
    for item in range(0,len(mylist)-1):
        if mylist[item]==3 and mylist[item+1]==3:
            return 1 #(True)
        else:
            pass
    return 0 #(False)
a=myfunc([9,8,3,3,4])    
print(a)
#another way to solve it
'''def has_33(nums):
    for i in range(0, len(nums)-1):
      
        # nicer looking alternative in commented code
        #if nums[i] == 3 and nums[i+1] == 3:
    
        if nums[i:i+2] == [3,3]:
            return True  
    
    return False'''