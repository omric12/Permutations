import unRanking
import ranking
import permutationsList

def memu():
    ans = input("Choose an oprarion :\n" +
    "1 - List all n! Permutations\n" +
    "2 - Ranking\n" +
    "3 - Unranking\n")
    if ans == '1':
        permutationsList.main()
    elif ans == '2':
        ranking.main()
    else:
        unRanking.main()


def main():
    while(True):
        memu()

if __name__ == "__main__":
    main()
