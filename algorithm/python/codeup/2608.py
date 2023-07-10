from itertools import product

n = int(input())
d = "OX"
result = product(d, repeat=n)

for r in result:
    for i in range(len(r)):
        print(r[i], end="")
    print()
