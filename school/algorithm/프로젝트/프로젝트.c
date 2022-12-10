#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef char *element;
typedef struct
{
  element type[50];
  int index;
  struct BookInfo *next;
} BookType;

typedef struct
{
  element bookName[50];
  float rate;
  int price;
  int index;
  struct BookInfo *next;
} BookInfo;

// ���Ḯ��Ʈ
void printBookTypeList(BookType *head)
{
  int i = 1;
  printf("======== ���� ���� ���� ========\n");
  while (head != NULL)
  {
    head->index = i++;
    printf("\n[%d] %s", head->index, head->type);
    head = head->next;
  }
  printf("\n\n================================\n\n");
}

void printBookInfoList(BookInfo *head)
{
  int i = 1;
  printf("======================= ���� å ���� =======================\n");
  while (head != NULL)
  {
    head->index = i++;
    printf("\n[%d] %-24s���� : %-6d��, ���� : %.1f��", head->index, head->bookName, head->price, head->rate);
    head = head->next;
  }
  printf("\n\n============================================================\n\n");
}

BookType *insertFirstBT(BookType *head, char *name)
{
  BookType *newBookType = (BookType *)malloc(sizeof(BookType));
  strcpy(newBookType->type, name);
  newBookType->next = head;
  head = newBookType;
  return head;
}

BookInfo *insertFirst(BookInfo *head, char *name, int price, float rate)
{
  BookInfo *newBookInfo = (BookInfo *)malloc(sizeof(BookInfo));
  strcpy(newBookInfo->bookName, name);
  newBookInfo->price = price;
  newBookInfo->rate = rate;
  newBookInfo->next = head;
  head = newBookInfo;
  return head;
}

BookType *reverseBT(BookType *head)
{
  BookType *p, *q, *r;
  p = head;
  q = NULL;
  while (p != NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  return q;
}

BookInfo *reverse(BookInfo *head)
{
  BookInfo *p, *q, *r;
  p = head;
  q = NULL;
  while (p != NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  return q;
}

element temp[100];

BookType *deleteFirstBT(BookType *head)
{
  BookType *removed;
  if (head == NULL)
    return NULL;
  removed = head;
  strcpy(temp, removed->type);
  head = removed->next;
  free(removed);
  return head;
}

BookInfo *deleteFirst(BookInfo *head)
{
  BookInfo *removed;
  if (head == NULL)
    return NULL;
  removed = head;
  strcpy(temp, removed->bookName);
  head = removed->next;
  free(removed);
  return head;
}

int main()
{
  BookType *bt = NULL;
  char bookType[100];
  int select1;
  element data;
  while (1)
  {
    printf("���������ϼ���\n\n1 : �߰�\n2 : ����\n3 : å ���� �������� �̵�\n4 : ���α׷� ����\n\n");
    scanf("%d", &select1);
    system("cls");
    if (select1 == 1)
    {
      printf("�߰��� ���� ������ �Է����ּ���.\n\n");
      scanf(" %[^\n]", bookType);
      bt = insertFirstBT(bt, bookType);
      printf("\n%s(��)�� �߰��Ǿ����ϴ�.", bookType);
      Sleep(2000);
      system("cls");
      bt = reverseBT(bt);
    }
    else if (select1 == 2)
    {
      if (bt != NULL)
      {
        bt = deleteFirstBT(bt);
        printf("%s(��)�� �����Ǿ����ϴ�.", &temp);
      }
      else
      {
        printf("������ ���� ������ �����ϴ�.");
      }
      Sleep(2000);
      system("cls");
    }
    else if (select1 == 3)
    {
      for (int i = 3; i >= 1; i--)
      {
        system("cls");
        printf("%d�� �� å ���� ȭ������ �̵��մϴ�.", i);
        Sleep(1000);
      }
      system("cls");
      break;
    }
    else if (select1 == 4)
    {
      system("cls");
      printf("���α׷��� ����˴ϴ�.\n\n");
      exit(0);
    }
    else
    {
      printf("\n�ٽ� �Է����ּ���.\n");
    }
    printBookTypeList(bt);
  }
  BookInfo *bi = NULL;
  BookInfo *p;
  char bookName[100];
  int bookPrice;
  float bookRate;
  int bookIndex;
  int select;
  while (1)
  {
    printf("���������ϼ���\n\n1 : �߰�\n2 : ����\n3 : ���α׷� ����\n\n");
    scanf("%d", &select);
    system("cls");
    if (select == 1)
    {
      printf("å�� �̸��� �Է����ּ���. \n\n");
      scanf(" %[^\n]", bookName);
      printf("\nå�� ������ �Է����ּ���. \n\n");
      scanf("%d", &bookPrice);
      printf("\nå�� ������ �Է����ּ���. \n\n");
      scanf("%f", &bookRate);
      bi = insertFirst(bi, bookName, bookPrice, bookRate);
      printf("\n%s(��)�� �߰��Ǿ����ϴ�.", bookName);
      Sleep(2000);
      system("cls");
      bi = reverse(bi);
    }
    else if (select == 2)
    {
      if (bi != NULL)
      {
        bi = deleteFirst(bi);
        printf("%s(��)�� �����Ǿ����ϴ�.", &temp);
      }
      else
      {
        printf("������ å ������ �����ϴ�.");
      }
      Sleep(2000);
      system("cls");
    }
    else if (select == 3)
    {
      system("cls");
      printf("���α׷��� ����˴ϴ�.\n\n");
      exit(0);
    }
    else
    {
      printf("�ٽ� �Է����ּ���.\n");
    }
    printBookInfoList(bi);
  }
  return 0;
}