n = int(input())
l = []

for i in range(n):
    math, info = map(int, input().split())
    l.append([i + 1, math, info])

l.sort(key=lambda x: (-x[-2], -x[-1], x[0]))

for i in range(n):
    print(l[i][0], l[i][1], l[i][2])
