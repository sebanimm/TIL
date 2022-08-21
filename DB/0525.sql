--1������
create table Salesperson
(
    Sname varchar2 (20),
    age number,
    salary number,
    primary key (Sname)
);

insert into Salesperson
    values ('���', 1, 10);
insert into Salesperson
    values ('����', 2, 5);
insert into Salesperson
    values ('�ν�', 2, 10);
insert into Salesperson
    values ('õ��', 3, 30);
insert into Salesperson
    values ('TOM', 20, 9160);
    
create table Order1
(
    Onumber number,
    custname varchar2(20),
    salesperson varchar2 (20),
    amount number,
    primary key (custname, salesperson),
    foreign key (custname) references Customer1(Cname),
    foreign key (salesperson) references Salesperson(Sname)
);

insert into order1
    values (1,'�޽�', '���', 1);
insert into order1
    values (3,'����', '����', 5);
insert into order1
    values (6,'�ֽ�', '�ν�', 4);
insert into order1
    values (10,'���', 'õ��', 2);
insert into order1
    values (11, '�޽�', 'TOM', 3);

create table Customer1
(
    Cname varchar2 (20),
    city varchar2 (20),
    industrytype varchar2 (20),
    primary key (Cname)
);

insert into Customer1
    values ('�޽�', '�λ�', '�л�');
insert into Customer1
    values ('����', '����', '������');
insert into Customer1
    values ('�ֽ�', '�뱸', '�ݵ�Ŵ���');
insert into Customer1
    values ('���', '�λ�', '����');
insert into Customer1
    values ('�޽�', 'LA', '����');
    
--2������
select Sname, salary
from salesperson;

--3������
select Sname
from salesperson
where age < 30;

--4������
select Cname
from customer1
where city like ('%S');

--5������
select count(distinct custname)
from order1;

--6������
select custname, count(amount)
from order1
group by custname;

--7������
select Sname, age
from salesperson
where Sname in (select salesperson
                from order1
                where custname in (select Cname
                                    from customer1
                                    where city like 'LA'));
                                    
--8���L[
select s.sname, s.age
from salesperson s, customer1 c, order1 o
where s.sname = o.salesperson and o.custname = c.cname and c.city like 'LA';

--9������
select salesperson
from order1
group by salesperson
having count(salesperson) >= 2;

--10������
update salesperson
set salary = 45000
where Sname like 'TOM';