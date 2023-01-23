import math

import FactorialRepresentation123 as FR


def generate_suffix(n):
    if n == 2:
        return '2'
    else:
        sn = ''
        sn_prev = generate_suffix(n - 1)
        for i in range(n - 1):
            sn = sn + sn_prev + str(n)
        sn = sn + sn_prev
        return (sn)


def suffix_swap(s, n):
    # print("suffix_swap: s=" + str(s) + " n=" + str(n))
    last_digits = s[-n:]
    last_digits.reverse()
    s = s[0:-n] + last_digits
    # print(*s)
    return s


def index_by_perm(perm):
    if len(perm) == 1 and int(perm[0]) == 1:
        return 1
    next_perm = []
    for p in range(len(perm) - 1):
        next_perm.append((int(perm[int(p) + 1]) - int(perm[0])) % len(perm))
    var = (int(perm[0]) - 1) * math.factorial(len(perm) - 1) + index_by_perm(next_perm)
    return var


def perm_by_index(index, n):
    p = [0] * n
    fact_rep = FR.represent(int(index) - 1)
    for i in range (int(n)):
        fact_rep.append(0)
    p[0] = 1
    for j in range(1, n):
        for k in range(j+1 , 1, -1):
            p[k-1] = 1 + (p[k - 2] + fact_rep[j - 1]) % (j + 1)
        p[0] = fact_rep[j - 1] + 1
    return p

def runList(size):
    v=sn = generate_suffix(int(size))


    a = []
    res = []
    for i in range(int(size)):
        a.append(i + 1)
    res.append(a)
    for x in range(len(sn)):
        a = suffix_swap(a, int(sn[x]))
        res.append(a)
