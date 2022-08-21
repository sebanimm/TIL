-- create 문
create table NewBook
(
    bookid number primary key,
    bookname varchar2(20) not null,
    publisher varchar2(20) unique,
    price number default 10000 check (price > 1000)
);
    
create table NewOrder
(
    orderid number,
    custid number not null,
    bookid number not null,
    saleprice number, 
    orderdate date,
    primary key (orderid),
    foreign key (custid) references NewCustomer(custid)
);

-- on delete cascade : 참조하고 있는 테이블의 기본기카 사라지면 참조하는 외래키 값도 같이 사라진다
-- on delete set null : 참조하고 있는 테이블의 기본기카 사라지면 참조하는 외래키 값은 null이 삽입된다
-- 기본 : 삭제 자체를 거절함

create table NewCustomer
(
    custid number primary key,
    name varchar2(40),
    address varchar2(40),
    phone varchar2(30)
);
    
drop table NewBook;
drop table NewCustomer;
drop table NewOrder;

-- not null 제약조건 : 데이터를 삽입할 때 해당 속성값에 null이 들어가면 안됨
-- unique 제약조건 : 해당 속성값에 동일한 두개 이상의 값이 들어가면 안됨
-- default 제약조건 : 만약 사용자가 그 속성값에 널을 삽입하려고 하면 디폴트 값 다음으로 넣은 값을 자동으로 삽입 
-- check 제약조건 : 속성값의 도메인을 지정(속성값의 범위를 지정한다)

alter table NewBook
rename constraint SYS_C008449 to NewBook_PK;

-- 문자열 자료형 - char(n), varchar(n), varchar2(n)
-- char(n) : n byte 메모리를 무조건 할당
-- varchar(n) : n byte를 메모리에 할당하지만 한글자만 가변형으로 메모리 공간 할당가능
-- varchar2(n) : varchar의 상위버전






select *
from book;

select *
from customer;

select * 
from orders;