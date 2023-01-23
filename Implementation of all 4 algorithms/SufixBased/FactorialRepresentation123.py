import math


def represent(num):
    res = []
    i = 2
    print("Factorial Representation for: ", num)
    while num > 0:
        res.append(int(num % i))
        # print(*res)
        num = int(num / i)
        i = i + 1
    print("Factorial Representation is: ", *res)
    return res


def calc(arr):
    sum = 0
    for i in range(len(arr)):
        fact = len(arr) - 1 - i
        sum += int(arr[i]) * math.factorial(fact)
    return sum


if __name__ == '__main__':
    size = input("Enter number \n")
    res = represent(int(size))
    print("\n recalculating:\n")
    print(calc(res))
