import pymysql
import random

conn = pymysql.connect(host="localhost", port=3307,
                       user="root", password="1234", db="BSSM", charset="utf8")
curs = conn.cursor()


def print_data():  # 테이블 목록 출력
    sql = "select * from my_table"
    curs.execute(sql)
    rows = curs.fetchall()
    print(rows)


def insert_data():  # 테이블에 무작위 데이터 추가
    # 무작위 숫자 두 개를 a, b에 저장
    a = random.randint(1, 100)
    b = random.randint(1, 100)
    sql = f"insert into my_table values(1, {a}, {b})"
    curs.execute(sql)
    conn.commit()


insert_data()
print_data()
