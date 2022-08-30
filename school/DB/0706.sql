--1������
-- 쌤 진짜 너무하시네요
create table �л�
(
    �й� number primary key,
    �г� number,
    �� number,
    ��ȣ number,
    ���� varchar2(10),
    �̸� varchar2(10)
);

create table �а�
(
    �а���ȣ number primary key,
    �й� number,
    �̸� varchar2(10),
    �а� varchar2(10),
    foreign key (�й�) references �л�(�й�)
);

create table ��
(
    �ܹ�ȣ number primary key,
    �й� number,
    ���� varchar2(10),
    �δ��� varchar2(10),
    foreign key (�й�) references �л�(�й�)
);


INSERT INTO �л� 
    VALUES (1101, 1, 1, 1, '��', '��*��');
INSERT INTO �л� 
    VALUES (1102, 1, 1, 2, '��', '��*��');
INSERT INTO �л�
    VALUES (1103, 1, 1, 3, '��', '��*��');
INSERT INTO �л� 
    VALUES (1201, 1, 2, 1, '��', '��*��');
INSERT INTO �л� 
    VALUES (1202, 1, 2, 2, '��', '��*��');
INSERT INTO �л�
    VALUES (1203, 1, 2, 3, '��', '��*��');
INSERT INTO �л�
    VALUES (1301, 1, 3, 1, '��', '��*��');
INSERT INTO �л�
    VALUES (1302, 1, 3, 2, '��', '��*��');
INSERT INTO �л�
    VALUES (1303, 1, 3, 3, '��', '��*��');
INSERT INTO �л�
    VALUES (1401, 1, 4, 1, '��', '��*��');
INSERT INTO �л�
    VALUES (1402, 1, 4, 2, '��', '��*��');
INSERT INTO �л�
    VALUES (1403, 1, 4, 3, '��', '��*��');
INSERT INTO �л�
    VALUES (2101, 2, 1, 1, '��', '��*��');
INSERT INTO �л�
    VALUES (2102, 2, 1, 2, '��', '��*��');
INSERT INTO �л�
    VALUES (2103, 2, 1, 3, '��', '��*��');
INSERT INTO �л�
    VALUES (2201, 2, 2, 1, '��', '��*��');
INSERT INTO �л� 
    VALUES (2202, 2, 2, 2, '��', '��*��');
INSERT INTO �л� 
    VALUES (2203, 2, 2, 3, '��', '��*��');
INSERT INTO �л� 
    VALUES (2301, 2, 3, 1, '��', '��*��');
INSERT INTO �л� 
    VALUES (2302, 2, 3, 2, '��', '��*��');
INSERT INTO �л� 
    VALUES (2303, 2, 3, 3, '��', '��*��');
INSERT INTO �л� 
    VALUES (2401, 2, 4, 1, '��', '��*��');
INSERT INTO �л� 
    VALUES (2402, 2, 4, 2, '��', '��*��');
INSERT INTO �л� 
    VALUES (2403, 2, 4, 3, '��', '��*��');
    
INSERT INTO �а� 
    VALUES (1, 1101, '��*��', NULL);
INSERT INTO �а� 
    VALUES (2, 1102, '��*��', NULL);
INSERT INTO �а� 
    VALUES (3, 1103, '��*��', NULL);
INSERT INTO �а� 
    VALUES (4, 1201, '��*��', NULL);
INSERT INTO �а� 
    VALUES (5, 1202, '��*��', NULL);
INSERT INTO �а� 
    VALUES (6, 1203, '��*��', NULL);
INSERT INTO �а� 
    VALUES (7, 1301, '��*��', NULL);
INSERT INTO �а� 
    VALUES (8, 1302, '��*��', NULL);
INSERT INTO �а� 
    VALUES (9, 1303, '��*��', NULL);
INSERT INTO �а� 
    VALUES (10, 1401, '��*��', NULL);
INSERT INTO �а� 
    VALUES (11, 1402, '��*��', NULL);
INSERT INTO �а� 
    VALUES (12, 1403, '��*��', NULL);
INSERT INTO �а� 
    VALUES (13, 2101, '��*��', '�Ұ���');
INSERT INTO �а� 
    VALUES (14, 2102, '��*��', '�Ұ���');
INSERT INTO �а� 
    VALUES (15, 2103, '��*��', '�Ұ���');
INSERT INTO �а� 
    VALUES (16, 2201, '��*��', '�Ұ���');
INSERT INTO �а� 
    VALUES (17, 2202, '��*��', '�Ұ���');
INSERT INTO �а� 
    VALUES (18, 2203, '��*��', '�Ұ���');
INSERT INTO �а� 
    VALUES (19, 2301, '��*��', '�Ӻ���');
INSERT INTO �а� 
    VALUES (20, 2302, '��*��', '�Ӻ���');
INSERT INTO �а� 
    VALUES (21, 2303, '��*��', '�Ӻ���');
INSERT INTO �а� 
    VALUES (22, 2401, '��*��', '�Ӻ���');
INSERT INTO �а� 
    VALUES (23, 2402, '��*��', '�Ӻ���');
INSERT INTO �а� 
    VALUES (24, 2403, '��*��', '�Ӻ���');

INSERT INTO �� 
    VALUES(1, 1101, '��*��', '��*��');
INSERT INTO �� 
    VALUES(2, 1102, '��*��', '��*��');
INSERT INTO �� 
    VALUES(3, 1103, '��*��', '��*��');
INSERT INTO �� 
    VALUES(4, 1201, '��*��', '��*��');
INSERT INTO �� 
    VALUES(5, 1202, '��*��', '��*��');
INSERT INTO �� 
    VALUES(6, 1203, '��*��', '��*��');
INSERT INTO �� 
    VALUES(7, 1301, '��*��', '��*��');
INSERT INTO �� 
    VALUES(8, 1302, '��*��', '��*��');
INSERT INTO ��
    VALUES(9, 1303, '��*��', '��*��');
INSERT INTO �� 
    VALUES(10, 1401, '��*��', '��*��');
INSERT INTO ��  
    VALUES(11, 1402, '��*��', '��*��');
INSERT INTO �� 
    VALUES(12, 1403, '��*��', '��*��');
INSERT INTO �� 
    VALUES(13, 2101, '��*��', '��*��');
INSERT INTO �� 
    VALUES(14, 2102, '��*��', '��*��');
INSERT INTO ��  
    VALUES(15, 2103, '��*��', '��*��');
INSERT INTO �� 
    VALUES(16, 2201, '��*��', '��*��');
INSERT INTO �� 
    VALUES(17, 2202, '��*��', '��*��');
INSERT INTO �� 
    VALUES(18, 2203, '��*��', '��*��');
INSERT INTO �� 
    VALUES(19, 2301, '��*��', '��*��');
INSERT INTO �� 
    VALUES(20, 2302, '��*��', '��*��');
INSERT INTO �� 
    VALUES(21, 2303, '��*��', '��*��');
INSERT INTO �� 
    VALUES(22, 2401, '��*��', '��*��');
INSERT INTO �� 
    VALUES(23, 2402, '��*��', '��*��');
INSERT INTO �� 
    VALUES(24, 2403, '��*��', '��*��');

--2������
SELECT �л�.�г�, �л�.��, �л�.��ȣ, �л�.�̸�, �л�.����, �а�.�а�, ��.����, ��.�δ���
FROM �л�, �а�, ��
WHERE �л�.�й� = �а�.�й� AND �л�.�й� = ��.�й�;