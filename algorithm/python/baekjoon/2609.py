def 최대공약수(a, b):
    while b:
        a, b = b, a % b

    return a


def 최소공배수(a, b):
    return (a * b) // 최대공약수(a, b)


A, B = map(int, input().split())
print(최대공약수(B, A))
print(최소공배수(B, A))
