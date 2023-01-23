import datetime
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


"""function return index of number
input: the array and the number
output :the index"""
def return_index(arr, num):
    for i in range (len(arr)):
        if (arr[i].val == num):
            return i

"""function runs all the permutations
input: the first permutation
output :none"""
def perm(arr):
    tarr = [0] * (len(arr) + 1)
    for i in  range (1, len(arr) + 1):
        tarr[i] = i

    while(tarr[len(arr) != 1]):


        if(tarr[len(tarr) - 1] < 2):
            break
        mobile = return_index(arr, tarr[len(arr)])
        i = tarr[len(arr)]

        if(arr[mobile].left == True):
            arr[mobile], arr[mobile - 1] = arr[mobile - 1], arr[mobile]

            tarr[len(arr)] = len(arr)


            if(is_mobile(arr, arr[mobile - 1], mobile - 1) == False):

                arr[mobile - 1].left = not arr[mobile - 1].left

                tarr[i] = tarr[i - 1]
                tarr[i - 1] = i - 1

        else:
            arr[mobile], arr[mobile + 1] = arr[mobile + 1], arr[mobile]
            tarr[len(arr)] = len(arr)

            if(is_mobile(arr, arr[mobile + 1], mobile + 1) == False):

                arr[mobile + 1].left = not arr[mobile + 1].left

                tarr[i] = tarr[i - 1]
                tarr[i - 1] = i - 1


