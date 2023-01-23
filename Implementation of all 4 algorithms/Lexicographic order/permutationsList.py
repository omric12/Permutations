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
def makeList(num):
    list = []
    for i in range (num):
       list.append(i + 1)
    return list

"""function prints all the permutions
input: first permution and the number the user chose
output : none"""
def permutations(num, list):
    for i in range (math.factorial(int(num))):
        print(list)
        ls = Next_permutation(list, int(num) - 1)
        list = ls


def main():
    num = input("Enter number: ")
    list = makeList(int(num))
    permutations(num, list)

if __name__ == "__main__":
    main()
