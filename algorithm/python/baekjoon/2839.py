N = int(input())
count = 0

while N >= 0:
    if N % 5 == 0:
        count += N // 5
        break
    N -= 3
    count += 1

print(count if N >= 0 else -1)
