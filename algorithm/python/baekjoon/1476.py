E, S, M = map(int, input().split())
e = 0
s = 0
m = 0

while True:
    if e % 15 == E - 1 and s % 28 == S - 1 and m % 19 == M - 1:
        break
    e += 1
    s += 1
    m += 1

print(max(e, s, m) + 1)
