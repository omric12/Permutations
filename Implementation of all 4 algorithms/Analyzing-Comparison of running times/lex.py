import math
"""function swaps between 2 parameters
input: 2 parameters a, b
output : the 2 parameters after swap"""
def swap(a, b):
    a, b = b, a
    return a, b
"""function makes the next permution
input: current permution ans the number of digits - 1
output : the next permution"""
def Next_permutation(list, num):
    j = num - 1
    while (j + 1 < len(list) and list[j] > list [j+1]):
          j -=1
    k = num;
    while (k >= 0 and list[j] > list[k]):
          k-=1

    list[j], list[k] = swap(list[j],list[k])
    l = num
    m = j + 1
    while (l > m):
         list[l], list[m] = swap(list[l],list[m])
         l-=1
         m+=1
    return list
"""function makes list from 1 to the given number
input: number
output : the list"""
def makeList1(num):
    list = []
    for i in range (num):
       list.append(i + 1)
    return list

"""function prints all the permutions
input: first permution and the number the user chose
output : none"""
def permutations(num, list):
    for i in range (math.factorial(int(num))):
        #print(list)
        ls = Next_permutation(list, int(num) - 1)
        list = ls
"""function findes the index of the permutation 
input: the permutation
output :the index"""
def rank(list):
    total = 0
    while(len(list) > 1):
        total += (list[0] - 1) * math.factorial(len(list) - 1)
        for i in range(len(list)):
            if (list[i] > list[0]):
                list[i]-=1
        list = list[1:]
    return total
"""function convert string of numbers to list of ints
input: string of numbers
output : list of int"""
def makeList(str):
    list = []
    list[:0] = str
    es = [eval(i) for i in list]
    return es
"""function findes the Coefficients list
input: the len of the permutation and the index
output :the Coefficients list"""
def getListCoefficients(x, num):
    perm_len = num
    list = []
    while perm_len > 0:
        num = x // math.factorial(perm_len-1)
        list.append(num)
        x -= num * math.factorial(perm_len-1)
        perm_len -= 1
    return list

""" the function is reversing an array 
input: the array
output :the reversed array"""
def reverseArr(arr):
    arr = arr[len(arr)::-1]
    return arr

"""function gets the permutation 
input: the Coefficients list
output :the permutation"""
def getPerm(list):
    arr = []
    for i in range (len(list) -1, -1, -1):
         for j in range (len(arr)):
            if(list[i] < arr[j]):
                arr[j] += 1

         arr.append(list[i] + 1)
    return reverseArr(arr)

"""function gets drom the user the permutation 
input: the numer
output :the permutation"""
def menu(num):
    x = -1
    while(x < 0 or x > math.factorial(num) - 1):
        x = input(("Choose the index (number between 0-" + str(math.factorial(num) - 1) + "): "))
        x = int(x)
    return x
