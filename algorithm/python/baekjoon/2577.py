A = int(input())
B = int(input())
C = int(input())

sum = A * B * C
used_numbers = [int(i) for i in str(sum)]

for i in range(10):
    print(used_numbers.count(i))
