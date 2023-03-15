a = "홍길동:010-1234-5678"
# 주어진 값이 몇 번 나오는가?
count = a.count("0")
print(count)

# 주어진 값이 몇 번째에 처음으로 나오는가?, 없으면 출력되는 값은?
index = a.find("0")  # 찾는 값이 없으면 -1 반환
index2 = a.index("0")  # 찾는 값이 없으면 오류
print(index)
print(index2)

# 주어진 값이 몇 번째에 마지막으로 나오는가?
index = a.rfind("0")
index2 = a.rindex("0")
print(index)
print(index2)

# 주어진 단어가 포함되어 있으면 True 아니면 False 반환
result = "홍길동" in a
print(result)

# 문자열 나눠 list로
split_list = a.split(":")
print(split_list)

# 문자열 합치기
joined_string = ":".join(split_list)
print(joined_string)

# 문자열 바꾸기
replaced_string = a.replace("홍길동", "임꺽정")
print(replaced_string)

# 딕셔너리 생성
a = {"홍길동": "010-1234-5678"}

# 딕셔너리 추가
a["임꺽정"] = "010-8765-4321"
print(a)

# 특정 키의 값 삭제
del a["홍길동"]
print(a)

# 키 확인(True/False)
key_check = "임꺽정" in a
print(key_check)

# key와 value들만 따로 필요할 떄
keys = a.keys()
values = a.values()
print(list(keys))
print(list(values))
