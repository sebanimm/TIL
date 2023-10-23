N = int(input())

room_number = 1
count = 1

while N > room_number:
    room_number += 6 * count
    count += 1

print(count)
