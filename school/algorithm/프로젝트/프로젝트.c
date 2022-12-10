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

// 연결리스트
void printBookTypeList(BookType *head)
{
  int i = 1;
  printf("======== 현재 도서 종류 ========\n");
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
  printf("======================= 현재 책 정보 =======================\n");
  while (head != NULL)
  {
    head->index = i++;
    printf("\n[%d] %-24s가격 : %-6d원, 평점 : %.1f점", head->index, head->bookName, head->price, head->rate);
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
    printf("히히선택하세요\n\n1 : 추가\n2 : 삭제\n3 : 책 정보 페이지로 이동\n4 : 프로그램 종료\n\n");
    scanf("%d", &select1);
    system("cls");
    if (select1 == 1)
    {
      printf("추가할 도서 종류를 입력해주세요.\n\n");
      scanf(" %[^\n]", bookType);
      bt = insertFirstBT(bt, bookType);
      printf("\n%s(이)가 추가되었습니다.", bookType);
      Sleep(2000);
      system("cls");
      bt = reverseBT(bt);
    }
    else if (select1 == 2)
    {
      if (bt != NULL)
      {
        bt = deleteFirstBT(bt);
        printf("%s(이)가 삭제되었습니다.", &temp);
      }
      else
      {
        printf("삭제할 도서 종류가 없습니다.");
      }
      Sleep(2000);
      system("cls");
    }
    else if (select1 == 3)
    {
      for (int i = 3; i >= 1; i--)
      {
        system("cls");
        printf("%d초 뒤 책 정보 화면으로 이동합니다.", i);
        Sleep(1000);
      }
      system("cls");
      break;
    }
    else if (select1 == 4)
    {
      system("cls");
      printf("프로그램이 종료됩니다.\n\n");
      exit(0);
    }
    else
    {
      printf("\n다시 입력해주세요.\n");
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
    printf("히히선택하세요\n\n1 : 추가\n2 : 삭제\n3 : 프로그램 종료\n\n");
    scanf("%d", &select);
    system("cls");
    if (select == 1)
    {
      printf("책의 이름을 입력해주세요. \n\n");
      scanf(" %[^\n]", bookName);
      printf("\n책의 가격을 입력해주세요. \n\n");
      scanf("%d", &bookPrice);
      printf("\n책의 평점을 입력해주세요. \n\n");
      scanf("%f", &bookRate);
      bi = insertFirst(bi, bookName, bookPrice, bookRate);
      printf("\n%s(이)가 추가되었습니다.", bookName);
      Sleep(2000);
      system("cls");
      bi = reverse(bi);
    }
    else if (select == 2)
    {
      if (bi != NULL)
      {
        bi = deleteFirst(bi);
        printf("%s(이)가 삭제되었습니다.", &temp);
      }
      else
      {
        printf("삭제할 책 정보가 없습니다.");
      }
      Sleep(2000);
      system("cls");
    }
    else if (select == 3)
    {
      system("cls");
      printf("프로그램이 종료됩니다.\n\n");
      exit(0);
    }
    else
    {
      printf("다시 입력해주세요.\n");
    }
    printBookInfoList(bi);
  }
  return 0;
}