import sys

input = sys.stdin.readline

N, M, B = map(int, input().split())
ground = [list(map(int, input().split())) for _ in range(N)]
time = sys.maxsize
height = 0

for target in range(257):
    max, min = 0, 0

    for i in range(N):
        for j in range(M):
            if ground[i][j] >= target:
                max += ground[i][j] - target
            else:
                min += target - ground[i][j]

    if max + B >= min:
        if min + (max * 2) <= time:
            time = min + (max * 2)
            height = target

print(time, height)
