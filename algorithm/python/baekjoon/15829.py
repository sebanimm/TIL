def toHash(input, sequence):
    unique_number = int(ord(input)) - 96
    return unique_number * (31 ** sequence)


L = int(input())
s = input()
encoded_values = [toHash(s[i], i) for i in range(L)]
print(sum(encoded_values) % 1234567891)
