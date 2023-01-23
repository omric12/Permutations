import datetime
import lex
import suf
import loop
import adj

def memu():
    ans = input("\nChoose a phase to analyze: \n" +
    "1.list all n! Permutations\n" +
    "2.Ranking\n" +
    "3.Unranking\n")
    if ans == '1':
        num = input("Enter n: ")
        d = datetime.datetime.now()
        list = lex.makeList1(int(num))
        lex.permutations(num, list)
        print ("Lexicographic order: " + str((datetime.datetime.now() - d).microseconds) + " (microseconds)")
        d = datetime.datetime.now()
        arr = adj.createList(int(num))
        adj.perm(arr)
        print ("Adjacent tranaposition: " + str((datetime.datetime.now() - d).microseconds) + " (microseconds)")
        d = datetime.datetime.now()
        for i in range (20):
            arr = adj.createList(int(num))
            loop.perm(arr)
        print ("Loopless algo: " + str((datetime.datetime.now() - d).microseconds / 20) + " (microseconds)")
        d = datetime.datetime.now()
        for i in range (20):
            sn = suf.generate_suffix(int(num))
            a = []
            res = []
            for i in range(int(num)):
                a.append(i + 1)
            res.append(a)
            for x in range(len(sn)):
                a = suf.suffix_swap(a, int(sn[x]))
                res.append(a)
        print ("Sufix based : " + str((datetime.datetime.now() - d).microseconds / 20) + " (microseconds)")

    elif ans == '2':
        f = input("Enter permutation to find index: ")
        d = datetime.datetime.now()
        for i in range (20):
            list1 = lex.makeList(f)
            lex.rank(list1)
        print ("Lexicographic order: " + str((datetime.datetime.now() - d).microseconds / 20) + " (microseconds)")
        d = datetime.datetime.now()
        for i in range (20):
            list = adj.makeList(f)
            lista = adj.listA(list)
            adj.index(lista)
        n = datetime.datetime.now()
        print ("Adjacent tranaposition: " + str(( n- d).microseconds /20) + " (microseconds)")
        print ("Loopless algo: " + str((n - d).microseconds / 20) + " (microseconds)")
        d = datetime.datetime.now()
        for i in range (50):
            suf.index_by_perm(f)
        print ("Sufix based : " + str((datetime.datetime.now() - d).microseconds / 50) + " (microseconds)")

    else:
        num = input("Enter number of digits in the permutation : ")
        num = int(num)
        x = lex.menu(num)
        d = datetime.datetime.now()
        for i in range (20):
            list2 = lex.getListCoefficients(x, num)
            lex.getPerm(list2)
        print ("Lexicographic order: " + str((datetime.datetime.now() - d).microseconds / 20) + " (microseconds)")
        d = datetime.datetime.now()
        for i in range (100):
            adj.findPer(num, x)
        n = datetime.datetime.now()
        print ("Adjacent tranaposition: " + str(( n- d).microseconds /100 ) + " (microseconds)")
        print ("Loopless algo: " + str((n - d).microseconds / 100) + " (microseconds)")
        d = datetime.datetime.now()
        for i in range (100):
            suf.perm_by_index(x, num)
        print ("Sufix based : " + str((datetime.datetime.now() - d).microseconds / 100) + " (microseconds)")


def main():
    while(True):
      memu()

if __name__ == "__main__":
    main()
