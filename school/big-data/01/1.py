text = input("문자열 입력: ")
exceptions = ("a", "e", "i", "o", "u", "A", "E", "I", "O", "U", " ")

for exception in exceptions:
    text = text.replace(exception, "")

print()
print(text)
