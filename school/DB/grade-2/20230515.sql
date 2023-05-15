create table dept (
  deptno number primary key,
  dname varchar2(14)
);

create table emp (
  empno number primary key,
  ename varchar2(10),
  hiredate date,
  deptno number,
  foreign key (deptno) references dept (deptno)
);

create table sal (
  sum number,
  empno number,
  deptno number,
  foreign key (empno) references emp (empno),
  foreign key (deptno) references dept (deptno)
);

alter table emp
add job varchar2(10);

insert all
into dept values(1, '인사부')
into dept values(2, '자금부')
into dept values(3, '홍보부')
select *
from dual;

insert all
into emp values(1, '권세원', to_date('20230501', 'yyyymmdd'), '사원', 1)
into emp values(2, '홈리스', to_date('20230502', 'yyyymmdd'), '인턴', 2)
into emp values(3, '김프롭스', to_date('20230503', 'yyyymmdd'), '부장', 3)
into emp values(4, '사밀', to_date('20230504', 'yyyymmdd'), '과장', 1)
into emp values(5, '삼칠이', to_date('20230505', 'yyyymmdd'), '인턴', 2)
into emp values(6, '브로냐', to_date('20230506', 'yyyymmdd'), '이사', 3)
into emp values(7, '웰트', to_date('20230507', 'yyyymmdd'), '본부장', 3)
into emp values(8, '단항', to_date('20230508', 'yyyymmdd'), '팀장', 1)
into emp values(9, '제레', to_date('20230509', 'yyyymmdd'), '실장', 2)
into emp values(10, '쿠팡맨', to_date('20230510', 'yyyymmdd'), '이사', 3)
select *
from dual;

insert all
into sal values(3000, 1, 1)
into sal values(1000, 2, 2)
into sal values(9000, 3, 3)
into sal values(7000, 1, 4)
into sal values(1000, 2, 5)
into sal values(10000, 3, 6)
into sal values(8000, 3, 7)
into sal values(5000, 1, 8)
into sal values(4000, 2, 9)
into sal values(12000, 3, 10)
select *
from dual;

select d.dname,  avg(s.sum) 
from dept d, sal s
where d.deptno = s.deptno
group by d.dname;

select
from
where
group by e.job;
