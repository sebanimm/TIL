def f(n):
    if n == 0:
        return 1
    return n * f(n - 1)


n = int(input())
fact = list(str(f(n)))
fact.reverse()

for i in fact:
    if int(i) != 0:
        idx = fact.index(i)
        fact = fact[:idx]
        break

count = fact.count("0")
print(count)
