create table 극장 
(
    극장번호 number,
    극장이름 varchar2(40),
    위치 varchar2(40),
    primary key (극장번호)
);
create table 상영관
(
    극장번호 number,
    상영관번호 number check (상영관번호 between 1 and 10),
    영화제목 varchar2(40),
    가격 number check (가격 <= 20000),
    좌석수 number,
    primary key (극장번호, 상영관번호),
    foreign key (극장번호) references 극장(극장번호)
);

create table 예약
(
    극장번호 number,
    상영관번호 number check (상영관번호 between 1 and 10),
    고객번호 number,
    좌석번호 number,
    날짜 date,
    primary key (극장번호,상영관번호,고객번호),
    foreign key (극장번호) references 극장(극장번호),
    foreign key (극장번호, 상영관번호) references 상영관(극장번호, 상영관번호),
    foreign key (고객번호) references 고객(고객번호)
);

create table 고객
(
    고객번호 number,
    이름 varchar2(40),
    주소 varchar2(40),
    primary key (고객번호)
);

--1번문제
select 극장이름, 위치
from 극장;

--2번문제
select 극장이름
from 극장
where 위치 like '잠실';

--3번문제
select 이름
from 고객
where 주소 like '잠실';

--4번문제
select 극장번호,상영관번호,영화제목
from 상영관
where (가격 <= 8000);

--5번문제
select 이름
from 고객
where 주소 in (select 위치
                from 극장);
--6번문제
select count(극장번호) as 극장갯수
from 극장;

--7번문제
select avg(가격) as 평균가격
from 상영관;

--8번문제
select count(고객번호)
from 예약
where 날짜 = ('20/09/01');

--9번문제
select 영화제목
from 상영관
where 극장번호 in (select 극장번호
                 from 극장
                 where 극장이름 like '대한');

--10번문제
select 이름
from 고객
where 고객번호 in (select 고객번호
                from 예약
                where 극장번호 = 3);

--11번문제
select sum(가격)
from 상영관
where 극장번호 = (select 극장번호
                from 극장
                where 극장이름 like '대한');

--12번문제
select 극장번호, count(극장번호)
from 상영관
group by 극장번호;

--13번문제
select 극장번호, 상영관번호
from 상영관
where 극장번호 in (select 극장번호
                from 극장
                where 위치 like '잠실')
group by 극장번호, 상영관번호;

--14번문제
select 극장번호, count(극장번호) as 고객
from 예약
where 날짜 = ('20/09/01')
group by 극장번호;
--15번문제
select 영화제목
from 상영관, 예약
where 날짜 = '20200901' AND 예약.상영관번호 = 상영관.상영관번호 AND 예약.극장번호 = 상영관.극장번호
group by 영화제목;

--16번문제
insert into 예약
    values (2, 3, 6, 32, '20200905');
    
insert into 상영관
    values (2,5,'무서운 영화',19000, 150);
    
insert into 고객
    values (6,'김민수','부산');
    
insert into 극장
    values (4,'CGV','서면');
--17번문제
update 상영관
set 가격 = 가격 + 가격 / 10;
--------------

select *
from 극장;

select *
from 상영관;

select *
from 고객;

select *
from 예약;