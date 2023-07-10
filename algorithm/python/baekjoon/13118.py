a = list(map(int, input().split()))
b, c, d = map(int, input().split())

if b in a:
    print(a.index(b) + 1)
else:
    print(0)
