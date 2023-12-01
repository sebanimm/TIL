from sys import stdin

stack = []

COMMAND_LIST = {
    "push": stack.append,
    "pop": lambda: stack.pop(-1) if stack else -1,
    "size": lambda: len(stack),
    "empty": lambda: 0 if stack else 1,
    "top": lambda: stack[-1] if stack else -1,
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
