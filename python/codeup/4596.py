n = []

for i in range(9):
    a = list(map(int, input().split()))
    n.append(a)

res = max(map(max, n))
print(res)

x = 0
y = 0

for i in range(9):
    for j in range(9):
        if n[i][j] == res:
            x = i
            y = j

print(x + 1, y + 1)
