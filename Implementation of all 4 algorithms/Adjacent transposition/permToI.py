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
def main():
    f = input("Enter permutation to find index: ")
    list = makeList(f)
    lista = listA(list)
    print(index(lista))


if __name__ == "__main__":
    main()
