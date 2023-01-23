import math
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

def main():
    f = input("Enter permutation to find index: ")
    list = makeList(f)
    print("the index is : " + str(rank(list)))

if __name__ == "__main__":
    main()
