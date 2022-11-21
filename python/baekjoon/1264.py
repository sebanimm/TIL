while True:
    cnt = 0
    n = input()
    if n == "#":
        break
    for a in n:
        if a in "aeiouAEIOU":
            cnt += 1
    print(cnt)
