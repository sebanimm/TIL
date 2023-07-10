n = int(input())
count = 0

for a in range(1, n):
    for b in range(a, n):
        for c in range(b, n):
            if a + b + c == n and a + b > c:
                count += 1

print(count)
