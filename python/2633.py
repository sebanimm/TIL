n, k = map(int, input().split())
l = list(map(int, input().split()))
idx = n + 1

for i in range(n):
    if l[i] >= k:
        idx = i + 1
        break

print(idx)
