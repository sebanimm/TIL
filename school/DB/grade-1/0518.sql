create table ���� 
(
    �����ȣ number,
    �����̸� varchar2(40),
    ��ġ varchar2(40),
    primary key (�����ȣ)
);
create table �󿵰�
(
    �����ȣ number,
    �󿵰���ȣ number check (�󿵰���ȣ between 1 and 10),
    ��ȭ���� varchar2(40),
    ���� number check (���� <= 20000),
    �¼��� number,
    primary key (�����ȣ, �󿵰���ȣ),
    foreign key (�����ȣ) references ����(�����ȣ)
);

create table ����
(
    �����ȣ number,
    �󿵰���ȣ number check (�󿵰���ȣ between 1 and 10),
    ����ȣ number,
    �¼���ȣ number,
    ��¥ date,
    primary key (�����ȣ,�󿵰���ȣ,����ȣ),
    foreign key (�����ȣ) references ����(�����ȣ),
    foreign key (�����ȣ, �󿵰���ȣ) references �󿵰�(�����ȣ, �󿵰���ȣ),
    foreign key (����ȣ) references ��(����ȣ)
);

create table ��
(
    ����ȣ number,
    �̸� varchar2(40),
    �ּ� varchar2(40),
    primary key (����ȣ)
);

--1������
select �����̸�, ��ġ
from ����;

--2������
select �����̸�
from ����
where ��ġ like '���';

--3������
select �̸�
from ��
where �ּ� like '���';

--4������
select �����ȣ,�󿵰���ȣ,��ȭ����
from �󿵰�
where (���� <= 8000);

--5������
select �̸�
from ��
where �ּ� in (select ��ġ
                from ����);
--6������
select count(�����ȣ) as ���尹��
from ����;

--7������
select avg(����) as ��հ���
from �󿵰�;

--8������
select count(����ȣ)
from ����
where ��¥ = ('20/09/01');

--9������
select ��ȭ����
from �󿵰�
where �����ȣ in (select �����ȣ
                 from ����
                 where �����̸� like '����');

--10������
select �̸�
from ��
where ����ȣ in (select ����ȣ
                from ����
                where �����ȣ = 3);

--11������
select sum(����)
from �󿵰�
where �����ȣ = (select �����ȣ
                from ����
                where �����̸� like '����');

--12������
select �����ȣ, count(�����ȣ)
from �󿵰�
group by �����ȣ;

--13������
select �����ȣ, �󿵰���ȣ
from �󿵰�
where �����ȣ in (select �����ȣ
                from ����
                where ��ġ like '���')
group by �����ȣ, �󿵰���ȣ;

--14������
select �����ȣ, count(�����ȣ) as ��
from ����
where ��¥ = ('20/09/01')
group by �����ȣ;
--15������
select ��ȭ����
from �󿵰�, ����
where ��¥ = '20200901' AND ����.�󿵰���ȣ = �󿵰�.�󿵰���ȣ AND ����.�����ȣ = �󿵰�.�����ȣ
group by ��ȭ����;

--16������
insert into ����
    values (2, 3, 6, 32, '20200905');
    
insert into �󿵰�
    values (2,5,'������ ��ȭ',19000, 150);
    
insert into ��
    values (6,'��μ�','�λ�');
    
insert into ����
    values (4,'CGV','����');
--17������
update �󿵰�
set ���� = ���� + ���� / 10;
--------------

select *
from ����;

select *
from �󿵰�;

select *
from ��;

select *
from ����;