a = input()
b = [0] * 26


for i in a:
    b[ord(i) - 97] += 1

for i in b:
    print(i, end=" ")
