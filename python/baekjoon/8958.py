n = int(input())

for i in range(n):
    test = input()
    count = 0
    sum = 0

    for case in test:
        if case == "O":
            count += 1
            sum += count
        else:
            count = 0

    print(sum)
