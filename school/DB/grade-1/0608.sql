--1번문제
create table MyUser
(
    USER_SEQ number primary key,
    ID varchar2 (20),
    USER_NAME varchar2 (20),
    DATETIME date
);

insert into MyUser 
    values (1, 'lee1545', '이순신', '22-05-04');
insert into MyUser 
    values (2, 'lee1502', '이황', '22-05-01');
insert into MyUser 
    values (3, 'lee1536', '이이', '22-05-02');
insert into MyUser 
    values (4, 'lee1397', '세종대왕', '22-05-03');
insert into MyUser 
    values (5, 'shin1504', '신사임당', '22-05-05');
    
--2번 문제
create table Category
(
    CATEGORY_SEQ number primary key,
    NAME varchar2 (20)
);

insert into Category 
    values (1, '공지');
insert into category
    values (2, '뉴스');
insert into category
    values (3, '대화마당');

--3번문제
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
    values (1, 1, 1, '학익진 진법', '기본은 전사에서 기진奇陣으로 유명한 망치와 모루(핀서 클로우)의 전법에서 내려치는 망치를 2개로 하여 우회와 포위를 겹으로 구사하는 방법이다. 한니발 바르카가 칸나이 전투에서 우수한 기동 기마군 2부대를 이용하고 자신의 백전연마 노장들을 모루로 사용하여 승리를 거뒀던 전법이다. 서양인들은 이를 흔히 이중포위라 부르지만 실은 학익진 기본에 예비군단 2개를 추가로 운용하여 포위진을 완성시킨 형태다. 즉, 이것은 어디까지나 우월한 기마병의 기동성을 이용한 육상의 진법이란 것이다.', '1592-08-24');
insert into post
    values (2, 3, 4, '훈민정음', '훈민정음(訓民正音)은 백성을 가르치는 바른 소리라는 뜻이다. 훈민정음이라고 부르는 대상은 두 가지가 있는데, 그 하나는 1443년 음력 12월(양력 1444년 1월)에 세종대왕이 만든 한국어의 표기 체계, 즉 오늘날의 한글을 창제 당시에 부른 이름이고, 또 하나는 1446년 9월[1]에 발간된 책 이름이다. 여기서는 후자, 즉 훈민정음이라는 책을 설명한다.', '1583/01/01');
insert into post 
    values (3, 1, 5, '신사임당에 대해', '신사임당 [申師任堂, 1504~1551] 본관은 평산(平山)이고, 호는 사임당(師任堂:思任堂:師妊堂)·시임당(媤妊堂)·임사재(任師齋)이다. 강원도 강릉(江陵) 출생이며, 율곡 이이(李珥)의 어머니이다. 효성이 지극하고 지조가 높았으며 어려서부터 경문(經文)을 익히고 문장·침공(針工)·자수(刺繡)에 능했으며, 특히 시문(詩文)과 그림에 뛰어나 여러 편의 한시(漢詩) 작품이 전해진다. 또한 안견(安堅)의 영향을 받은 화풍(畵風)은 여성 특유의 섬세 정묘함을 더하여 한국 제일의 여류화가라는 평을 듣는다. 산수(山水)·포도·풀·벌레 등을 잘 그렸다. 자녀교육에도 남다른 노력을 기울여 현모양처(賢母良妻)의 귀감(龜鑑)이 되었다. 이이의 어머니이다.', '1504-10-29');
insert into post 
    values (4, 2, 3, '십만양병설', '이이는 선조에게 10만 양병설을 주장하여 동인의 반감을 사기도 하였다.[19] 그는 일본의 전국시대는 종결될 것이며, 일본을 통일할 무사는 일본 내 세력 내 갈등 완화와 국내 관심사를 다른 곳으로 돌리기 위한 목적으로 미구에 명나라나 조선을 침공할 것이라고 주장했다. 일본의 도발에 대한 대응으로 그는 10만 명의 정병을 양성하여 일본의 침략에 대비할 것을 건의하였다. 그러나 그의 이러한 견해는 동인에 의해 왕을 현혹하기 위한 발언으로 치부되었고, 서인조차 그의 생각이 지나친 상상력과 허언이라며 호응해주지 않았다. 이이가 10만 양병설을 주장하던 당시, 조선의 총 병력수는 장부상으로는 30만 명이 넘었으나, 실제 전투 가능한 병력 숫자는 1,000명 정도가 되었다고 한다.[20] 1581년 대제학 재직 중 오랫동안 저술하던 《경연일기》의 완성을 보았다. 신사임당의 아들이다.', '1446-10-09');
    
--4번문제
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
    values (1, 1, 2, '한산도 대첩(閑山島大捷) 혹은 견내량대첩(見乃梁大捷)은 1592년 8월 14일(선조 25년 음력 7월 8일) 통영 한산도 앞바다에서 조선 수군이 왜군을 크게 무찌른 해전', '22-05-01', (null));
insert into mycomment
    values (2, 1, 3, '이 전투에서 육전에서 사용하던 포위 섬멸 전술 형태인 학익진을 처음으로 해전에서 펼쳤다.', '22-05-01', 1);
insert into mycomment
    values (3, 3, 2, '이이의 어머니 신사임당', '22-05-01', (null));
insert into mycomment
    values (4, 2, 1, '가나다라마바사', '22-05-01', (null));
    
update mycomment
set parent = 1
where comment_seq = 2;
--6번문제
select name
from category;

--7번문제
select comment_seq, content, parent
from mycomment
where parent is not null;

--8번문제
select p.content , u.id, u.user_name
from post p inner join myuser u
on p.user_seq = u.user_seq
where p.content like '%신사임당%' or u.user_name like '신사임당';
--9번문제
select c.name,p.post_seq,p.title, u.user_name,to_char(p.datetime,'YYYY/MM/DD') as 시간,Count(*)
from post p
         join Category c on p.category_seq = c.category_seq
         join mycomment m on p.post_seq = m.post_seq
         join myuser u on p.user_seq = u.user_seq
group by c.name, p.post_seq, p.title, u.user_name,p.datetime,m.post_seq;
--10번문제
update category
set category_seq = 3
where name like '대화마당';