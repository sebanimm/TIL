word = input()
l = []

for i in range(1, len(word)-1):
    res = []
    for j in range(i + 1, len(word)):
        res = ((word[:i])[::-1])+((word[i:j])[::-1])+((word[j:])[::-1])
        l.append(res)

l.sort()
print(l[0])
