#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 9

// 책종류 - 스택
// 책정보 - 연결리스트
typedef char *element;
typedef struct
{
  int top;
  int index;
  element type[100];
} BookType;

typedef struct
{
  element bookName[50];
  element pubDate[8];
  float rate;
  int price;
  int index;
  struct BookInfo *next;
} BookInfo;

// 스택
void initStack(BookType *bt)
{
  bt->top = -1;
}

int isFull(BookType *bt)
{
  return bt->top == STACK_SIZE - 1;
}

int isEmpty(BookType *bt)
{
  return bt->top == -1;
}

int push(BookType *bt, element type)
{
  if (isFull(bt))
  {
    printf("더이상 도서 종류를 추가할 수 없습니다.");
    return -1;
  }
  bt->top++;
  bt->type[bt->top] = type;
}

element pop(BookType *bt)
{
  if (isEmpty(bt))
  {
    printf("도서 종류가 비어있습니다.");
    return;
  }
  return bt->type[(bt->top)--];
}

// 연결리스트
BookInfo *deleteAll(BookInfo *head)
{
  BookInfo *p = head;
  BookInfo *removed;
  if (p == NULL)
    return NULL;
  while (p != NULL)
  {
    removed = p;
    p = p->next;
    free(removed);
    removed = removed->next = NULL;
  }
  return head;
}

void printList(BookInfo *head)
{
  int i = 1;
  printf("\n\n======== 현재 도서 목록 ========\n");
  while (head != NULL)
  {
    head->index = i++;
    printf("\n[%d] %s", head->index, head->bookName);
    head = head->next;
  }
  printf("\n\n================================\n\n");
}

BookInfo *insertFirst(BookInfo *head, char *x)
{
  BookInfo *newBookInfo = (BookInfo *)malloc(sizeof(BookInfo));
  strcpy(newBookInfo->bookName, x);
  newBookInfo->next = head;
  head = newBookInfo;
  return head;
}

BookInfo *insertMiddle(BookInfo *head, BookInfo *pre, char *x)
{
  BookInfo *newBookInfo = (BookInfo *)malloc(sizeof(BookInfo));
  strcpy(newBookInfo->bookName, x);

  if (head == NULL || pre == NULL)
  {
    newBookInfo->next = NULL;
    head = newBookInfo;
  }
  else
  {
    newBookInfo->next = pre->next;
    pre->next = newBookInfo;
  }
  return head;
}
BookInfo *insertLast(BookInfo *head, char *x)
{
  BookInfo *newBookInfo = (BookInfo *)malloc(sizeof(BookInfo));
  BookInfo *temp;

  strcpy(newBookInfo->bookName, x);
  newBookInfo->next = NULL;
  if (head == NULL)
  {
    head = newBookInfo;
    return head;
  }
  temp = head;
  while (temp->next != NULL)
    ;
  temp->next = newBookInfo;
  return head;
}

BookInfo *searchNode(BookInfo *head, char *x)
{
  BookInfo *temp = head;

  while (temp != NULL)
  {
    if (strcmp(temp->bookName, x) == 0)
      return temp;
    else
      temp = temp->next;
  }
  return temp;
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

int main()
{
  // initStack(bt);
  // printf("추가할 책 종류를 입력해주세요.\n");
  // scanf("%s", bookType);
  // push(bt, bookType);
  // printf("%s이 추가되었습니다.\n", *(bt->type));
  // printf("%d\n", bt->top);
  // printf("%s 삭제\n", pop(bt));
  // printf("%d\n", bt->top);
  // printf("%s", *(bt->type[bt->top]));
  BookInfo *head = NULL;
  BookInfo *p;
  char bookInfo[100];
  int bookIndex;
  char bookType[100];
  int select;
  while (1)
  {
    printf("히히선택하세요\n1 : 추가\n2 : 삭제\n3 : 초기화\n4 : 프로그램 종료\n");
    scanf("%d", &select);
    if (select == 1)
    {
      printf("추가할거 넣으세요 \n");
      scanf("%s", bookInfo);
      head = insertFirst(head, bookInfo);
      printf("추가됐음");
      head = reverse(head);
      printList(head);
    }
    else if (select == 2)
    {
      printf("몇번인덱스 삭제할건지 말하세요 \n");
      scanf("%d", bookIndex);
      insertFirst(head, bookIndex);
      printf("삭제됐음");
      printList(head);
    }
    else if (select == 3)
    {
      printf("도서 목록을 초기화합니다.");
      head = deleteAll(head);
      printList(head);
    }
    else if (select == 4)
    {
      printf("프로그램이 종료됩니다.");
      exit(0);
    }
    else
    {
      printf("다시 입력해주세요.");
    }
    printf("\n");
  }
  return 0;
}