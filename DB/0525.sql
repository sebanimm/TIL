--1번문제
create table Salesperson
(
    Sname varchar2 (20),
    age number,
    salary number,
    primary key (Sname)
);

insert into Salesperson
    values ('춘식', 1, 10);
insert into Salesperson
    values ('병식', 2, 5);
insert into Salesperson
    values ('민식', 2, 10);
insert into Salesperson
    values ('천식', 3, 30);
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
    values (1,'급식', '춘식', 1);
insert into order1
    values (3,'무식', '병식', 5);
insert into order1
    values (6,'주식', '민식', 4);
insert into order1
    values (10,'상식', '천식', 2);
insert into order1
    values (11, '휴식', 'TOM', 3);

create table Customer1
(
    Cname varchar2 (20),
    city varchar2 (20),
    industrytype varchar2 (20),
    primary key (Cname)
);

insert into Customer1
    values ('급식', '부산', '학생');
insert into Customer1
    values ('무식', '서울', '직장인');
insert into Customer1
    values ('주식', '대구', '펀드매니저');
insert into Customer1
    values ('상식', '부산', '교사');
insert into Customer1
    values ('휴식', 'LA', '무직');
    
--2번문제
select Sname, salary
from salesperson;

--3번문제
select Sname
from salesperson
where age < 30;

--4번문제
select Cname
from customer1
where city like ('%S');

--5번무제
select count(distinct custname)
from order1;

--6번문제
select custname, count(amount)
from order1
group by custname;

--7번문제
select Sname, age
from salesperson
where Sname in (select salesperson
                from order1
                where custname in (select Cname
                                    from customer1
                                    where city like 'LA'));
                                    
--8번묹[
select s.sname, s.age
from salesperson s, customer1 c, order1 o
where s.sname = o.salesperson and o.custname = c.cname and c.city like 'LA';

--9번문제
select salesperson
from order1
group by salesperson
having count(salesperson) >= 2;

--10번문제
update salesperson
set salary = 45000
where Sname like 'TOM';