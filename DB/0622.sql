--���� �Լ�
select abs(-15) from dual; -- �Է��� ���� ���

select ceil (15.2) from dual; --�Է��� �ø��Ͽ� ���

select power (3,4) from dual; --(1���Է�)^(2���Է�) ���

select round(15.4) from dual; --�Է��� �ݿø��� ���

select concat ('HAPPY', 'ee', 'aa') from dual; --�Է¹��� ���� ��ġ��(2����)

select lpad('page 1', 15, '*') from dual;--(2���Է�)ĭ�� ���� 1�� �Է��� �����ʺ��� ä��� ���ڸ��� 3���Է����� ä��

select ltrim ('page 1','pag') from dual; --���ʳ�->�����ʳ�����, 1���Է°� 2���Է¿� �ִ� ������ �����ѰŴ� ����, ���� ������ �ٷ� ���

select REPLACE('JACK','J','BL') from dual;--1���Է¿� 2���Է°� ���� �ܾ 3���Է��� �ܾ�� �ٲ㼭 ���

select rpad ('page 1', 15, '*') from dual; --(2���Է�)ĭ�� ���� 1�� �Է��� ���ʺ��� ä��� ���ڸ��� 3���Է����� ä��

select rtrim ('page 1','1 eg') from dual; --�����ʳ�->���ʳ�����, 1���Է°� 2���Է¿� �ִ� ������ �����ѰŴ� ����, ���� ������ �ٷ� ���

select substr ('ABCDEFG', 3, 4) from dual;--3��°ĭ ���ķ� 3��°ĭ ���� 4ĭ ���

select ascii ('A') from dual; -- �Է¹������� �ƽ�Ű�ڵ尪 ���

select instr('HOLYMOLY', 'OL', 1, 2) from dual; --(1���Է�)���� ã�� �ܾ� (�Է� 2)�� (3���Է�)���� �����ؼ� (4���Է�)��°�� ã�� �ܾ��� ��ġ�� ���ڷ� ���

select sysdate from dual; --��¥ ���

select nullif(123,null) from dual; --1���Է� - ���̺��̸� 2���Է� - ���̺� ���
                                    -- 1���Է¿� �ִ� ��ҿ��� 2���Է°� ���� ��Ҹ� null�� �ٲ�

--�ڡڡ��߿�ڡڡ�
select nvl (100, null) from dual; --1���Է��� ���̺� �ִٸ� �״��, ���ٸ� 2���Է� ����

--�� ���̺�
--���� ���� ������ ���̺�
--Ư¡ 1 : ���� �Ұ� (��ġ �������̺��� �ѱ������̶�� �����̺��� pdf)
--Ư¡ 2 : ���� �����ְ� ���� ������ �����ؼ� ������ �� �ִ� (���ȼ� ���)
-- ����
-- create view (�� �̸�) (���� �����ְ� ���� �� �̸�)
--      as select ~~~~

--���� 1. book ���̺��� '�౸'��� ������ ���Ե� �ڷḸ �����ִ� �並 ������

create view sc_book
    as select *
    from book
    where bookname like '%�౸%';
    
select * 
from sc_book;

--���� 2. �ּҿ� '���ѹα�'�� �����ϴ� ����� ������ �並 ����� ��ȸ�Ͻÿ�

select * from customer;
select * from book;
select * from orders;

create view koreans 
    as select * 
    from customer 
    where address like '%���ѹα�%';
    
select * from koreans;

insert into customer values (6, '���̰�', '���ѹα� �λ�', null);

--���� 3. �� �̸� �߰� ��ǥ�� ���Ķ�

create view noMiddleName
    as select concat(substr(name, 1, 1),concat('*', substr(name,3,3))) as cname
    from customer;
    
    
select * from noMiddleName;