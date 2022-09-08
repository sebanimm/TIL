numbers = []
print(numbers)

numbers.append(1)
numbers.append(7)
numbers.append(3)
numbers.append(6)
numbers.append(5)
numbers.append(2)
numbers.append(13)
numbers.append(14)
print(numbers)

temp = []

for i in range(len(numbers)) :
  if (numbers[i] % 2 == 0) :
    temp.append(numbers[i])
numbers = temp
print(numbers)

numbers.insert(0, 20)
print(numbers)

numbers.sort()
print(numbers)