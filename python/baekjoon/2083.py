while True:
    n, a, w = input().split()
    a = int(a)
    w = int(w)
    if n == "#" and a == 0 and w == 0:
        break
    if a > 17 or w >= 80:
        print(f"{n} Senior")
    else:
        print(f"{n} Junior")
