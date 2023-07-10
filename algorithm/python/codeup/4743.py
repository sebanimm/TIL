nemo = []
for i in range(4):
    z = list(map(int, input().split()))
    nemo.append(z)
    if (nemo[i][0] == nemo[i][6] or nemo[i][2] == nemo[i][4]) and (nemo[i][1] == nemo[i][7] or nemo[i][3] == nemo[i][5]):
        print("c")
    elif nemo[i][0] > nemo[i][6] or nemo[i][1] > nemo[i][7] or nemo[i][2] < nemo[i][4] or nemo[i][3] < nemo[i][5]:
        print("d")
    elif nemo[i][0] == nemo[i][6] or nemo[i][1] == nemo[i][7] or nemo[i][2] == nemo[i][4] or nemo[i][3] == nemo[i][5]:
        print("b")
    else:
        print("a")
