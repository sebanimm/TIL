from collections import deque
from sys import stdin


def pop_front():
    return deq.popleft() if len(deq) != 0 else -1


def pop_back():
    return deq.pop() if len(deq) != 0 else -1


def size():
    return len(deq)


def empty():
    return 0 if len(deq) != 0 else 1


def front():
    return deq[0] if len(deq) != 0 else -1


def back():
    return deq[len(deq) - 1] if len(deq) != 0 else -1


deq = deque()

N = int(stdin.readline())


COMMAND_DICT = {
    "push_front": deq.appendleft,
    "push_back": deq.append,
    "pop_front": pop_front,
    "pop_back": pop_back,
    "size": size,
    "empty": empty,
    "front": front,
    "back": back,
}

for _ in range(N):
    command_line = stdin.readline().split()
    command = command_line[0]

    if len(command_line) == 2:
        X = command_line[1]
        COMMAND_DICT[command](X)
        continue

    print(COMMAND_DICT[command]())
