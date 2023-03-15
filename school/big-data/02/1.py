rrn = input("주민등록번호를 적으세요 : ")
rrn = rrn.replace('-', '')
multipliers = [2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5]
total = 0

for i in range(12):
    total += int(rrn[i]) * multipliers[i]

remain = total % 11
result = 11 - remain

if result >= 10:
    result %= 10

if result == int(rrn[12]):
    print(True)
else:
    print(False)
