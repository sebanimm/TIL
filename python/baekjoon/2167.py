l = []
n, m = map(int, input().split())

for _ in range(n):
    l.append(list(map(int, input().split())))

k = int(input())

for i in range(k):
    i, j, x, y = map(int, input().split())
    sum = 0

    for ii in range(i - 1, x):
        for jj in range(j - 1, y):
            sum += l[ii][jj]

    print(sum)
