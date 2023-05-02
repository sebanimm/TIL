n = int(input())
data = []

for i in range(n):
    schedule, year, month, day = map(str, input().split())
    data.append([schedule, int(year), int(month), int(day)])

data.sort(key=lambda x: (x[-3], x[-2], x[-1], x[0]))

for i in range(n):
    print(data[i][0])
