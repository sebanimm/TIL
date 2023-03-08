text = input()
sentences = text.split('.')

for sentence in sentences:
    sentence = sentence.strip()
    if sentence:
        print(f"{sentence.capitalize()}.")
