import sys
dic = {}
while True:
    print('''
1 : 전화번호 등록
2 : 전화번호 삭제
3 : 전화번호 검색
4 : 전화번호 전체 보기
5 : 종료
    '''.strip())
    num = int(input())
    if num == 1:
        info = input("이름:전화번호 형태로 입력 >> ")
        res = info.split(":")
        dic[res[0]] = res[1]
    elif num == 2:
        delete = input("누구를 지우시겠습니까? >> ")
        del dic[delete]
    elif num == 3:
        n = input("이름 입력 : ")
        if n in dic:
            print(dic[n])
        else:
            print("그런거 없음")
    elif num == 4:
        print(dic)
    elif num == 5:
        sys.exit()
