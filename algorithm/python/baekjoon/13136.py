a, b, c = map(int, input().split())

if a % c == 0:
    d = a // c
else:
    d = a // c + 1

if b % c == 0:
    e = b // c
else:
    e = b // c + 1

print(d * e)
