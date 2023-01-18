a = int(input())

for _ in range(a):
    b, c = input().split()

    idx = 0
    while idx != len(list(c)):
        for i in range(int(b)):
            print(c[idx], end="")
        idx += 1

    print()
