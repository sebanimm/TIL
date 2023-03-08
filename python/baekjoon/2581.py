m = int(input())
n = int(input())

prime_nums = []
for i in range(m, n + 1):
    count = 0
    if i > 1:
        for j in range(2, i):
            if i % j == 0:
                count += 1
                break
        if count == 0:
            prime_nums.append(i)


if len(prime_nums) > 0:
    print(sum(prime_nums))
    print(min(prime_nums))
else:
    print(-1)
