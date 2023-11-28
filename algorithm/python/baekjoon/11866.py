N, K = map(int, input().split())

queue = [i + 1 for i in range(N)]
permutation = []


while queue:
    for i in range(K - 1):
        queue.append(queue.pop(0))
    permutation.append(queue.pop(0))


print("<", end="")
for i in range(len(permutation) - 1):
    print(f"{permutation[i]}", end=", ")
print(f"{permutation[-1]}>", end="")
