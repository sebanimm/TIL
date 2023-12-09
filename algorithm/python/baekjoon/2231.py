N = int(input())

for i in range(1, N + 1):
    M = i + sum(map(int, str(i)))

    if M == N:
        print(i)
        break
else:
    print(0)
