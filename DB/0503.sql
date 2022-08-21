-- create ��
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

-- on delete cascade : �����ϰ� �ִ� ���̺��� �⺻��ī ������� �����ϴ� �ܷ�Ű ���� ���� �������
-- on delete set null : �����ϰ� �ִ� ���̺��� �⺻��ī ������� �����ϴ� �ܷ�Ű ���� null�� ���Եȴ�
-- �⺻ : ���� ��ü�� ������

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

-- not null �������� : �����͸� ������ �� �ش� �Ӽ����� null�� ���� �ȵ�
-- unique �������� : �ش� �Ӽ����� ������ �ΰ� �̻��� ���� ���� �ȵ�
-- default �������� : ���� ����ڰ� �� �Ӽ����� ���� �����Ϸ��� �ϸ� ����Ʈ �� �������� ���� ���� �ڵ����� ���� 
-- check �������� : �Ӽ����� �������� ����(�Ӽ����� ������ �����Ѵ�)

alter table NewBook
rename constraint SYS_C008449 to NewBook_PK;

-- ���ڿ� �ڷ��� - char(n), varchar(n), varchar2(n)
-- char(n) : n byte �޸𸮸� ������ �Ҵ�
-- varchar(n) : n byte�� �޸𸮿� �Ҵ������� �ѱ��ڸ� ���������� �޸� ���� �Ҵ簡��
-- varchar2(n) : varchar�� ��������






select *
from book;

select *
from customer;

select * 
from orders;