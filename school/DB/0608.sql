--1������
create table MyUser
(
    USER_SEQ number primary key,
    ID varchar2 (20),
    USER_NAME varchar2 (20),
    DATETIME date
);

insert into MyUser 
    values (1, 'lee1545', '�̼���', '22-05-04');
insert into MyUser 
    values (2, 'lee1502', '��Ȳ', '22-05-01');
insert into MyUser 
    values (3, 'lee1536', '����', '22-05-02');
insert into MyUser 
    values (4, 'lee1397', '�������', '22-05-03');
insert into MyUser 
    values (5, 'shin1504', '�Ż��Ӵ�', '22-05-05');
    
--2�� ����
create table Category
(
    CATEGORY_SEQ number primary key,
    NAME varchar2 (20)
);

insert into Category 
    values (1, '����');
insert into category
    values (2, '����');
insert into category
    values (3, '��ȭ����');

--3������
create table POST
(
    POST_SEQ number primary key,
    CATEGORY_SEQ number,
    USER_SEQ number,
    TITLE varchar2 (40),
    CONTENT varchar2 (4000),
    DATETIME date,
    foreign key (CATEGORY_SEQ) references category (CATEGORY_SEQ),
    foreign key (USER_SEQ) references MyUser (USER_SEQ)
);

insert into post
    values (1, 1, 1, '������ ����', '�⺻�� ���翡�� ������������ ������ ��ġ�� ���(�ɼ� Ŭ�ο�)�� �������� ����ġ�� ��ġ�� 2���� �Ͽ� ��ȸ�� ������ ������ �����ϴ� ����̴�. �ѴϹ� �ٸ�ī�� ĭ���� �������� ����� �⵿ �⸶�� 2�δ븦 �̿��ϰ� �ڽ��� �������� ������� ���� ����Ͽ� �¸��� �ŵ״� �����̴�. �����ε��� �̸� ���� ���������� �θ����� ���� ������ �⺻�� ���񱺴� 2���� �߰��� ����Ͽ� �������� �ϼ���Ų ���´�. ��, �̰��� �������� ����� �⸶���� �⵿���� �̿��� ������ �����̶� ���̴�.', '1592-08-24');
insert into post
    values (2, 3, 4, '�ƹ�����', '�ƹ�����(��������)�� �鼺�� ����ġ�� �ٸ� �Ҹ���� ���̴�. �ƹ������̶�� �θ��� ����� �� ������ �ִµ�, �� �ϳ��� 1443�� ���� 12��(��� 1444�� 1��)�� ��������� ���� �ѱ����� ǥ�� ü��, �� ���ó��� �ѱ��� â�� ��ÿ� �θ� �̸��̰�, �� �ϳ��� 1446�� 9��[1]�� �߰��� å �̸��̴�. ���⼭�� ����, �� �ƹ������̶�� å�� �����Ѵ�.', '1583/01/01');
insert into post 
    values (3, 1, 5, '�Ż��Ӵ翡 ����', '�Ż��Ӵ� [��������, 1504~1551] ������ ���(��ߣ)�̰�, ȣ�� ���Ӵ�(������:������:������)�����Ӵ�(�����)���ӻ���(�����)�̴�. ������ ����(˰��) ����̸�, ���� ����(���)�� ��Ӵ��̴�. ȿ���� �����ϰ� ������ �������� ��������� �湮(����)�� ������ ���塤ħ��(����)���ڼ�(��)�� ��������, Ư�� �ù�(����)�� �׸��� �پ ���� ���� �ѽ�(����) ��ǰ�� ��������. ���� �Ȱ�(��̱)�� ������ ���� ȭǳ(����)�� ���� Ư���� ���� �������� ���Ͽ� �ѱ� ������ ����ȭ����� ���� ��´�. ���(ߣ�)��������Ǯ������ ���� �� �׷ȴ�. �ڳ౳������ ���ٸ� ����� ��￩ �����ó(��ٽ����)�� �Ͱ�(Т��)�� �Ǿ���. ������ ��Ӵ��̴�.', '1504-10-29');
insert into post 
    values (4, 2, 3, '�ʸ��纴��', '���̴� �������� 10�� �纴���� �����Ͽ� ������ �ݰ��� ��⵵ �Ͽ���.[19] �״� �Ϻ��� �����ô�� ����� ���̸�, �Ϻ��� ������ ����� �Ϻ� �� ���� �� ���� ��ȭ�� ���� ���ɻ縦 �ٸ� ������ ������ ���� �������� �̱��� ���� ������ ħ���� ���̶�� �����ߴ�. �Ϻ��� ���߿� ���� �������� �״� 10�� ���� ������ �缺�Ͽ� �Ϻ��� ħ���� ����� ���� �����Ͽ���. �׷��� ���� �̷��� ���ش� ���ο� ���� ���� ��Ȥ�ϱ� ���� �߾����� ġ�εǾ���, �������� ���� ������ ����ģ ���°� ����̶�� ȣ�������� �ʾҴ�. ���̰� 10�� �纴���� �����ϴ� ���, ������ �� ���¼��� ��λ����δ� 30�� ���� �Ѿ�����, ���� ���� ������ ���� ���ڴ� 1,000�� ������ �Ǿ��ٰ� �Ѵ�.[20] 1581�� ������ ���� �� �������� �����ϴ� ���濬�ϱ⡷�� �ϼ��� ���Ҵ�. �Ż��Ӵ��� �Ƶ��̴�.', '1446-10-09');
    
--4������
create table MyComment
(
    COMMENT_SEQ number primary key,
    POST_SEQ number,
    USER_SEQ number,
    CONTENT varchar2 (4000),
    DATETIME date,
    PARENT number,
    foreign key (POST_SEQ) references post (POST_SEQ),
    foreign key (USER_SEQ) references MyUser (USER_SEQ),
    foreign key (parent) references mycomment (comment_seq)
);

insert into mycomment 
    values (1, 1, 2, '�ѻ굵 ��ø(��ߣ������) Ȥ�� �߳�����ø(̸Ҭ������)�� 1592�� 8�� 14��(���� 25�� ���� 7�� 8��) �뿵 �ѻ굵 �չٴٿ��� ���� ������ �ֱ��� ũ�� ��� ����', '22-05-01', (null));
insert into mycomment
    values (2, 1, 3, '�� �������� �������� ����ϴ� ���� ���� ���� ������ �������� ó������ �������� ���ƴ�.', '22-05-01', 1);
insert into mycomment
    values (3, 3, 2, '������ ��Ӵ� �Ż��Ӵ�', '22-05-01', (null));
insert into mycomment
    values (4, 2, 1, '�����ٶ󸶹ٻ�', '22-05-01', (null));
    
update mycomment
set parent = 1
where comment_seq = 2;
--6������
select name
from category;

--7������
select comment_seq, content, parent
from mycomment
where parent is not null;

--8������
select p.content , u.id, u.user_name
from post p inner join myuser u
on p.user_seq = u.user_seq
where p.content like '%�Ż��Ӵ�%' or u.user_name like '�Ż��Ӵ�';
--9������
select c.name,p.post_seq,p.title, u.user_name,to_char(p.datetime,'YYYY/MM/DD') as �ð�,Count(*)
from post p
         join Category c on p.category_seq = c.category_seq
         join mycomment m on p.post_seq = m.post_seq
         join myuser u on p.user_seq = u.user_seq
group by c.name, p.post_seq, p.title, u.user_name,p.datetime,m.post_seq;
--10������
update category
set category_seq = 3
where name like '��ȭ����';