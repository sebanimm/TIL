a = []
for _ in range(5):
    a.append(int(input()))

if a[0] < 0:
    print(abs(a[0]) * a[2] + a[3] + a[4] * a[1])
else:
    print((a[1] - a[0]) * a[4])
