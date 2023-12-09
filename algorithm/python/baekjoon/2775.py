apartment = {}


def memoization(k, n):
    key = f"{k}-{n}"

    if apartment.get(key):
        return apartment[key]

    if k == 0:
        apartment[key] = n
    else:
        apartment[key] = 0

        for i in range(1, n + 1):
            apartment[key] += memoization(k - 1, i)

    return apartment[key]


T = int(input())

for _ in range(T):
    floor = int(input())
    unit = int(input())

    print(memoization(floor, unit))
