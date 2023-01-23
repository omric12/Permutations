import listNoLoop
import indexToP
import permToI


def memu():
    ans = input("Choose an option :\n" +
    "1 - List all Permutations\n" +
    "2 - UnRanking\n" +
    "3 - ranking\n")
    if ans == '1':
        listNoLoop.main()
    elif ans == '2':
        indexToP.main()
    else:
        permToI.main()


def main():
    while (True):
        memu()

if __name__ == "__main__":
    main()
