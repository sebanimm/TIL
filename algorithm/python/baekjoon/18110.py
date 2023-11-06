def Round(num):
    return int(num) + [0, 1][num - int(num) >= 0.5]


N = int(input())

if N == 0:
    print(0)
else:
    difficulties = sorted([int(input()) for _ in range(N)])
    fifteen_percent = Round(0.15 * N)
    eighty_five_percent = N - fifteen_percent
    trimmed_mean = difficulties[fifteen_percent:eighty_five_percent]
    result = Round(sum(trimmed_mean) / len(trimmed_mean))

    print(result)
