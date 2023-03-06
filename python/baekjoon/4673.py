self_nums = set(range(1, 10001))
not_self = set()

for num in self_nums:
    for each_digit in str(num):
        num += int(each_digit)
    if num <= 10000:
        not_self.add(num)

self_nums -= not_self

for i in sorted(self_nums):
    print(i)
