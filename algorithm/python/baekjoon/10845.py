from sys import stdin

queue = []

COMMAND_LIST = {
    "push": queue.append,
    "pop": lambda: queue.pop(0) if queue else -1,
    "size": lambda: len(queue),
    "empty": lambda: 0 if queue else 1,
    "front": lambda: queue[0] if queue else -1,
    "back": lambda: queue[-1] if queue else -1,
}

N = int(stdin.readline())

for _ in range(N):
    command_line = stdin.readline().split()
    command = command_line[0]

    if len(command_line) == 2:
        X = command_line[1]
        COMMAND_LIST[command](X)
        continue

    print(COMMAND_LIST[command]())
