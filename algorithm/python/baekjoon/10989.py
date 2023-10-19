import sys

LIST_SIZE = 10001

N = int(sys.stdin.readline())
lst = [0]*LIST_SIZE

for _ in range(N):
    lst[int(sys.stdin.readline())] += 1

for i in range(LIST_SIZE):
    if lst[i] != 0:
        for _ in range(lst[i]):
            print(i)
