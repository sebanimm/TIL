n = int(input())
room_num = list(str(n))
sets = [0] * 10

for i in room_num:
    i = int(i)
    if i == 6 or i == 9:
        if sets[6] <= sets[9]:
            sets[6] += 1
        else:
            sets[9] += 1
    else:
        sets[i] += 1

print(max(sets))
