from collections import deque

N = int(input())
card_queue = deque(range(1, N + 1))

while len(card_queue) != 1:
    card_queue.popleft()
    card_queue.rotate(-1)

print(card_queue[0])
