a = list(input())

b = 0


while True:
    a = a[0] * len(a)

    if a == b:
        print('FA')
        break
    else:
        b = a
        a = str(a)
