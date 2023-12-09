from collections import Counter


def arithmetic_mean(values):
    return round(sum(values) / N)


def median(values):
    return values[len(values) // 2]


def mode(values):
    counter = Counter(values)
    mode = counter.most_common(2)

    if len(mode) == 1:
        return mode[0][0]

    if mode[0][1] == mode[1][1]:
        return mode[1][0]
    return mode[0][0]


def range1(values):
    return max(values) - min(values)


N = int(input())
values = [int(input()) for _ in range(N)]

values.sort()

print(arithmetic_mean(values))
print(median(values))
print(mode(values))
print(range1(values))
