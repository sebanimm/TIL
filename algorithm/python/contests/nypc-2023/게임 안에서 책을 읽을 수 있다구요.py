# 종류 1 (17점): 태그가 없음.
# 종류 2 (38점): <CENTER>, </CENTER> 태그만 있음.
# 종류 3 (31점): <RIGHT>, </RIGHT> 태그만 있음.
# 종류 4 (14점): 추가적인 제한 조건이 없음.
# case 4개중 1, 2, 3 통과

def sorted_sentence(method, sentence, max_length, fill):
    if method == "L":
        return sentence.ljust(max_length, fill)
    if method == "C":
        return sentence.center(max_length, fill)
    if method == "R":
        return sentence.rjust(max_length, fill)


N, M = map(int, input().split())  # N, M 입력 받음
content = [input() for _ in range(N)]  # 인풋 받고 리스트에 저장
flag = "L"


for line in content:  # 리스트 내 요소마다 for문
    if "<" in line:
        if "/" in line:
            flag = "L"
        elif "CENTER" in line:
            flag = "C"
        elif "RIGHT" in line:
            flag = "R"
        continue

    line = line.replace(" ", "-")  # 공백을 하이픈으로 바꿈

    while len(line) > M:  # line 길이가 최대출력길이 넘지 않을 때 까지
        space = line.rindex("-", 0, M+1)  # 하이픈이 있는 위치를 오른쪽부터 찾음
        parsed_line = line[:space]  # 그 위치를 기준으로 line을 나눔

        print(sorted_sentence(flag, parsed_line, M, "-"))  # 나눈 line 출력

        line = line[space+1:]  # 남은 라인으로 재할당

    print(sorted_sentence(flag, line, M, "-"))  # 나머지 라인 출력
