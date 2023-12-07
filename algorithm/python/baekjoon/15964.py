def weird_operator(a, b):
    return (a + b) * (a - b)


A, B = map(int, input().split())
print(weird_operator(A, B))
