N = int(input())
words = {input() for _ in range(N)}
sorted_by_dictionary = sorted(words)
sorted_by_length = sorted(sorted_by_dictionary, key=len)


for word in sorted_by_length:
    print(word)
