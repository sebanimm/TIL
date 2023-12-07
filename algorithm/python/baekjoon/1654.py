from sys import stdin

input = stdin.readline

K, N = map(int, input().split())
length_of_cables = [int(input()) for _ in range(K)]

start, end = 1, max(length_of_cables)

while start <= end:
    mid = (start + end) // 2
    LAN = 0

    for cable_length in length_of_cables:
        LAN += cable_length // mid

    if LAN >= N:
        start = mid + 1
    else:
        end = mid - 1

print(end)
