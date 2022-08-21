--ALTER ��

drop table newbook;
drop table newcustomer;
drop table neworder; 
--���̺� ���� ���ɾ�

create table newbook
(
    bookid number,
    bookname varchar2(20),
    publisher varchar2(20),
    price number
);

--ALTER �Ӽ� �߰�
--ALTER TABLE (���̺���) ADD (�Ӽ���) (�ڷ���);
--���� 1�� : newbook ���̺��� varchar2(13)�� �ڷ����� ���� isbn �Ӽ� �߰��ϱ�
alter table newbook add isbn varchar2(13);

--ALTER �Ӽ� ����
-- ALTER TABLE (���̺���) MODIFY (�Ӽ���) (�ٲٰ��� �ϴ� Ÿ��);
--���� 2�� : newbook ���̺��� �ִ� isbn �Ӽ��� �ڷ����� number�� �ٲٱ�
alter table newbook modify isbn number;

--ALTER �Ӽ� ����
--ALTER TABLE (���̺���) DROP COLUMN (�Ӽ���)
--���� 3�� : newbook ���̺��� �ִ� isbn �Ӽ� �����ϱ�
alter table newbook drop column isbn;

--���� 4�� : newbook ���̺��� bookid �Ӽ��� not null �������� �߰��ϱ�
alter table newbook modify bookid not null;

--���� 5�� : newbook ���̺��� bookid �Ӽ��� �⺻Ű�� �����ϱ�
alter table newbook add primary key(bookid);

--INSERT ��
--INSERT INTO (���̺���)({�����ϰ��� �ϴ� �Ӽ��� 1, 2, ...}) ����ü �Ӽ����� �� �ʿ��ҽ� ���� ����
--    VALUES(���� ����)                �� �� �Ӽ��� ������� �� �ʿ�� ����
--             �� ������ ���� �Ӽ��� ������ ���ƾ� ��.
--���� 1�� : BOOK ���̺��� ���ο� ���� '������ ����' �����ϱ� (�Ѽ����м��� �Ⱓ, ���� 90000��)
insert into BOOK 
    values (11, '������ ����', '�Ѽ����м���', 90000);

--���� 2�� : book ���̺��� ���ο� ���� '������ ����' �����ϱ� (�Ѽ����м��� �Ⱓ, ���� ����)
insert into BOOK(bookid, bookname, publisher)
    values (12, '������ ����', '�Ѽ����м���');
select *
from imported_book;

--���� 3�� : ���Ե��� ���(imported_book)�� book ���̺��� ��� �����Ͻÿ�
insert into book(bookid, bookname, price, publisher)
    select bookid, bookname, price, publisher    
    from imported_book;
--   �����ϰ��� �ϴ� �ڷ����� select�ϴ� �ڷ����� ���ٸ� ����. ���� ������ �����ϰ� ���� ��

-- update ��
-- �� �̸� �� ���� ������ �� �����
-- update (���̺���)
-- set (�Ӽ���) = ('�Ӽ���')
-- where (���ǹ�)

-- ���� 1�� : customer ���̺����� ������ȣ�� 5�� ������ �ּҸ� '���ѹα� �λ�'���� �����Ͻÿ�
update customer
set address = '���ѹα� �λ�'
where custid = 5;

-- ���� 2�� : customer ���̺����� �ڼ��� ������ �ּҸ� �迬�� ������ �ּҷ� �����Ͻÿ�
update customer
set address = (select address
               from customer             -- �μ����ǹ� ���
               where name like '�迬��')
where name like '�ڼ���'; -- where �������� ��� customer���� ����� �����Ұ�. �̰� ����Ʋ���� ������
--                                                                             �� �װ� ����~ �� �Һ� �κ�ι�

-- delete ��
--  �� �̹� ���ԵǾ��ִ� �����͵��� ������ �� ���.
-- delete 
-- from(���̺���)
-- where (���ǹ�)
-- 1�� ���� : customer ���̺����� ������ȣ�� 5�� ������ ������ �� ��� Ȯ��
delete
from customer
where custid = 5;

-- 2�� ���� : ��� ������ �����Ͻÿ�
delete 
from customer; -- ���� �ٸ� ���̺��� ����Ǿ� �־� �۵� X. �۵���Ű���� ����� ���̺����� �����ؾ� ��

-- rollback
-- �� �����Ѱ� 'Ŀ�� ������' ���ƿ�. 
--    Ŀ�� ������ DB�� ���������� ������� �ʾ� �ѹ��� ����������, 
--    ������ ���·� Ŀ���� �ϸ� �ѹ��� �Ұ���.

commit;
rollback;

------------------------------------

select *
from newbook;

select *
from book;

select *
from customer;
