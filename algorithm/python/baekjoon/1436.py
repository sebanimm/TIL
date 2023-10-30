N = int(input())
count = 0
name = 666

while True:
    if "666" in str(name):
        count += 1

    if count == N:
        break

    name += 1

print(name)
