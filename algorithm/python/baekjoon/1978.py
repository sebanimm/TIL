def is_prime(n):
    count = 0
    for i in range(2, n + 1):
        if n % i == 0:
            count += 1
    if count == 1:
        return True
    else:
        return False


n = int(input())
nums = list(map(int, input().split()))
count = 0

for num in nums:
    if is_prime(num):
        count += 1

print(count)
