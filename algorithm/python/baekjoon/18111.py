import sys

N, M, B = map(int, sys.stdin.readline().split())
ground = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]
time = sys.maxsize
height = 0

for i in range(257):
    max, min = 0, 0

    for i in range(N):
        for j in range(M):
            if ground[i][j] >= i:
                max += ground[i][j] - i
            else:
                min += i - ground[i][j]

    if max + B >= min:
        if min + (max * 2) <= time:
            time = min + (max * 2)
            height = i
print(time, height)
