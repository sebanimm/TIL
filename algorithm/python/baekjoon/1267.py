n = int(input())
y = 0
m = 0
x = list(map(int, input().split()))

for i in range(len(x)):
    y += (x[i] // 30 + 1) * 10
    m += (x[i] // 60 + 1) * 15

if y > m:
    print(f"M {m}")
elif y < m:
    print(f"Y {y}")
else:
    print(f"Y M {m}")
