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



"""function finds the ai according to the formula
input: bn, n
output :qn, ai"""
def findAi(bn, n):
    qn = bn // n
    rn = bn % n
    if (qn % 2 == 0):
        an = rn
    else:
        an = n - 1 - rn
    return qn,an


"""function shoes menu to choose index 
input: number of digits in permutation
output :the index"""
def menu(num):
    x = -1
    while(x < 0 or x > math.factorial(num) - 1):
        x = input(("Choose the index (number between 0-" + str(math.factorial(num) - 1) + "): "))
        x = int(x)
    return x

"""function findes the  permutation 
input: number and index
output :permutation"""
def findPer(num, index):
    perm = [0] * num
    for i in range(num, 0, -1):
        index, idres = findAi(index, i)
        idactual = 0
        for j in range(num):
            if (perm[j] == 0 and idactual == idres):
                perm[j] = i
                break
            elif (perm[j] == 0):
                idactual += 1
    perm.reverse()
    return perm

"""function makes list from str givven of numbers
input: the permutation as str
output :the permutation as list"""
def makeList(str):
    list = []
    list[:0] = str
    es = [eval(i) for i in list]
    return es


"""function makes list of a(i) indexes
input: the givven permutation 
output :the a list"""
def listA(arr):
    len1 = len(arr)
    alist = [0] * len1
    num = len1
    count = 0
    for j in range (len1):
        count = 0
        for i in range (len1 - 1, -1, -1):
            if(arr[i] == num):
                arr[i] = 0
                alist[num - 1] = count
                break
            if(arr[i] != 0):
                count+=1
        num -=1

    return alist

"""function findes the index of the permutation 
input: the a list
output :the index"""
def index(lista):
    b2 = lista[1]
    bprev = b2
    r = 0
    for i in range (3, len(lista) + 1):

        if(bprev % 2 == 0):
            r = lista[i - 1]
        else:
            r = i -1 - lista[i - 1]

        b = i * bprev + r
        bprev = b

    return b
