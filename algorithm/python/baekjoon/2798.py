N, M = map(int, input().split())
cards = sorted(list(map(int, input().split())))
sum = []

for i in range(N):
    for j in range(N):
        for k in range(N):
            if (
                cards[i] == cards[j]
                or cards[j] == cards[k]
                or cards[k] == cards[i]
                or cards[i] + cards[j] + cards[k] > M
            ):
                continue

            sum.append(cards[i] + cards[j] + cards[k])

print(max(sum))
