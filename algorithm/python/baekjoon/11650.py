N = int(input())
coordinates = [list(map(int, input().split())) for _ in range(N)]

for coordinate in sorted(coordinates):
    print(f"{coordinate[0]} {coordinate[1]}")
