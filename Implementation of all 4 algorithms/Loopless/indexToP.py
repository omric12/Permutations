import math

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

def main():
    num = int(input("Enter n: "))
    index = menu(num)
    perm = findPer(num, index)
    print(perm)

if __name__ == "__main__":
    main()
