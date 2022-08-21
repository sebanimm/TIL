--내장 함수
select abs(-15) from dual; -- 입력의 절댓값 출력

select ceil (15.2) from dual; --입력을 올림하여 출력

select power (3,4) from dual; --(1번입력)^(2번입력) 출력

select round(15.4) from dual; --입력을 반올림해 출력

select concat ('HAPPY', 'ee', 'aa') from dual; --입력받은 문장 합치기(2개만)

select lpad('page 1', 15, '*') from dual;--(2번입력)칸을 띄우고 1번 입력을 오른쪽부터 채우고 빈자리는 3번입력으로 채움

select ltrim ('page 1','pag') from dual; --왼쪽끝->오른쪽끝으로, 1번입력과 2번입력에 있는 문자중 동일한거는 삭제, 만약 막히면 바로 출력

select REPLACE('JACK','J','BL') from dual;--1번입력에 2번입력과 같은 단어를 3번입력의 단어로 바꿔서 출력

select rpad ('page 1', 15, '*') from dual; --(2번입력)칸을 띄우고 1번 입력을 왼쪽부터 채우고 빈자리는 3번입력으로 채움

select rtrim ('page 1','1 eg') from dual; --오른쪽끝->왼쪽끝으로, 1번입력과 2번입력에 있는 문자중 동일한거는 삭제, 만약 막히면 바로 출력

select substr ('ABCDEFG', 3, 4) from dual;--3번째칸 이후로 3번째칸 포함 4칸 출력

select ascii ('A') from dual; -- 입력받은값의 아스키코드값 출력

select instr('HOLYMOLY', 'OL', 1, 2) from dual; --(1번입력)에서 찾을 단어 (입력 2)를 (3번입력)부터 시작해서 (4번입력)번째로 찾은 단어의 위치를 숫자로 출력

select sysdate from dual; --날짜 출력

select nullif(123,null) from dual; --1번입력 - 테이블이름 2번입력 - 테이블 요소
                                    -- 1번입력에 있는 요소에서 2번입력과 같은 요소를 null로 바꿈

--★★★중요★★★
select nvl (100, null) from dual; --1번입력이 테이블에 있다면 그대로, 없다면 2번입력 삽입

--뷰 테이블
--보기 전용 가상의 테이블
--특징 1 : 수정 불가 (마치 기존테이블이 한글파일이라면 뷰테이블은 pdf)
--특징 2 : 내가 보여주고 싶은 정보만 추출해서 보여줄 수 있다 (보안성 우수)
-- 형식
-- create view (뷰 이름) (내가 보여주고 싶은 열 이름)
--      as select ~~~~

--문제 1. book 테이블에서 '축구'라는 문구가 포함된 자료만 보여주는 뷰를 만들자

create view sc_book
    as select *
    from book
    where bookname like '%축구%';
    
select * 
from sc_book;

--문제 2. 주소에 '대한민국'을 포함하는 고객들로 구성된 뷰를 만들고 조회하시오

select * from customer;
select * from book;
select * from orders;

create view koreans 
    as select * 
    from customer 
    where address like '%대한민국%';
    
select * from koreans;

insert into customer values (6, '이이경', '대한민국 부산', null);

--문제 3. 고객 이름 중간 별표로 고쳐라

create view noMiddleName
    as select concat(substr(name, 1, 1),concat('*', substr(name,3,3))) as cname
    from customer;
    
    
select * from noMiddleName;