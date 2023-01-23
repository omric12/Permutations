
"""class that saves direction of arrow + value of number"""
class Number:
    def __init__(self, left, val):
        self.left = left
        self.val = val
    def __str__(self):
        return f"{self.val}"

"""function makes list of Number's objects from 1 to num
input: num
output :the list"""
def createList(num):
    arr = []
    for i in range (num):
        arr.append(Number(True, i + 1))
    return arr

"""function checks if the Number is mobile
input: array of Numbers, the object in the array yhat we are checking and it's index
output :mobile/ not mobile"""
def is_mobile(arr, obj, index):
    if(obj.left == True):
        if(index - 1 > -1 and arr[index - 1].val < obj.val):
            return True
        else:
            return False
    else:
        if(index + 1 < len(arr)  and arr[index + 1].val < obj.val):
            return True
        else:
            return False

"""function prints the array of Numbers
input: the array
output :none"""
def print_arr(arr):
    for obj in arr:
        print (obj,end =" ")

"""function checks if we fot to the lase permutation (no mobiles)
input: the array
output :finished/noe finished"""
def finished(arr):
    for i in range (len(arr)):
        if(is_mobile(arr, arr[i], i)):
            return False
    return True

"""function findes the largest mobile
input: the permutation
output :the index"""

def largest_mobile(arr):
    index = 0;
    for i in range(len(arr)):
        if(is_mobile(arr, arr[index], index) == False):
            index = index + 1
        if(arr[i].val > arr[index].val and is_mobile(arr, arr[i], i)):
            index = i
    return index

"""function runs all the permutations 
input: the first permutation
output :none"""
def perm(arr):
    while(finished(arr) == False):
        mobile = largest_mobile(arr)


        if(arr[mobile].left):
            arr[mobile], arr[mobile - 1] = arr[mobile - 1], arr[mobile]
            for i in arr:
                if i.val > arr[mobile - 1].val:
                    i.left = not i.left
        else:
            arr[mobile], arr[mobile + 1] = arr[mobile + 1], arr[mobile]
            for i in arr:
                if i.val > arr[mobile + 1].val:
                    i.left = not i.left


        print_arr(arr)
        print("")


def main():
    num = input("Enter number of digits in the permutation : ")
    num = int(num)
    arr = createList(num)
    print_arr(arr)
    print("")
    perm(arr)

if __name__ == "__main__":
    main()
