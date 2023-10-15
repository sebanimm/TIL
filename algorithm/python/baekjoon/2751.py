N = int(input())
s = [int(input()) for _ in range(N)]
s = sorted(set(s))

for i in s:
    print(i)
