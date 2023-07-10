n = input()
count = 0

while len(n) > 1:
    x = 0
    for i in n:
        x += int(i)
    n = str(x)
    count += 1

print(count)
if int(n) % 3 == 0:
    print("YES")
else:
    print("NO")
