T = int(input())
rooms = []

for _ in range(T):
    H, W, N = map(int, input().split())
    floor = (N % H)
    line = N // H + 1

    if floor == 0:
        floor = H
        line -= 1

    rooms.append(100 * floor + line)

for room in rooms:
    print(room)
