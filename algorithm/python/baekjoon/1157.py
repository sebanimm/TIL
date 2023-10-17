s = input().upper()
l = list(set(s))
n = []

for word in l:
    n.append(s.count(word))

highest_use_frequency = max(n)

if n.count(highest_use_frequency) > 1:
    print("?")
else:
    print(l[n.index(highest_use_frequency)])
