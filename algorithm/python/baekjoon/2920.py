scale = list(map(int, input().split()))

if (sorted(scale) == scale) == True:
    print("ascending")
elif (sorted(scale, reverse=True) == scale) == True:
    print("descending")
else:
    print("mixed")
