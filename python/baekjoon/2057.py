def factorial(x):
    if x == 0:
        return 1
    return x * factorial(x - 1)


factorials = [factorial(a) for a in range(21)]
n = int(input())

if n == 0:
    print("NO")
else:
    for i in range(20, -1, -1):
        if n >= factorials[i]:
            n -= factorials[i]

    if n == 0:
        print("YES")
    else:
        print("NO")
