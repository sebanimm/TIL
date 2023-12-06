T = int(input())

for i in range(T):
    parenthesis_string = input()
    stack = []

    if parenthesis_string.count("(") != parenthesis_string.count(")"):
        print("NO")
        continue

    for element in parenthesis_string:
        if element == "(":
            stack.append(element)
        elif element == ")" and stack:
            stack.pop()

    if stack:
        print("NO")
    else:
        print("YES")
