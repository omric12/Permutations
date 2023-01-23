import math
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

def main():
    num = input("Enter number of digits in the permutation : ")
    num = int(num)
    x = menu(num)
    list = getListCoefficients(x, num)
    print("the permutation is: " + str((getPerm(list))))


if __name__ == "__main__":
    main()
