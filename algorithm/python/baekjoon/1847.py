from sys import exit, stdin


N = int(input())
stack = []
output_list = []
i = 1

for _ in range(N):
    input = int(stdin.readline())

    if i <= input:
        while i <= input:
            stack.append(i)
            output_list.append("+")
            i += 1

        stack.pop()
        output_list.append("-")

    else:
        if stack[-1] < input:
            print("NO")
            exit()

        else:
            stack.pop()
            output_list.append("-")

for output in output_list:
    print(output)
