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

BookType *push(BookType *bt, element Intype)
{
  if (isFull(bt))
  {
    printf("더이상 도서 종류를 추가할 수 없습니다.");
    return -1;
  }
  bt->top++;
  bt->type[bt->top] = Intype;

  return bt;
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
  printf("\n\n================================\n");
}

BookInfo *insertFirst(BookInfo *head, char *x)
{
  BookInfo *newBookInfo = (BookInfo *)malloc(sizeof(BookInfo));
  strcpy(newBookInfo->bookName, x);
  newBookInfo->next = head;
  head = newBookInfo;
  return head;
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

BookInfo *deleteFirst(BookInfo *head)
{
  BookInfo *removed;
  if (head == NULL)
    return NULL;
  removed = head;
  head = removed->next;
  free(removed);
  return head;
}

int main()
{
  BookType *bt = (BookType *)malloc(sizeof(BookType));
  initStack(&bt);
  char bookType[100];
  while (1)
  {
    printf("추가할 책 종류를 입력해주세요.\n\n");
    scanf("%s", bookType);
    push(&bt, bookType);
    printf("\n%s이 추가되었습니다.\n\n", bookType);
  }
  // printf("%d\n", bt->top);
  // printf("%s 삭제\n", pop(bt));
  // printf("%d\n", bt->top);
  // printf("%s", *(bt->type[bt->top]));
  // BookInfo *head = NULL;
  // BookInfo *p;
  // char bookInfo[100];
  // int bookIndex;
  // int select;
  // while (1)
  // {
  //   printf("히히선택하세요\n1 : 추가\n2 : 삭제\n3 : 프로그램 종료\n\n");
  //   scanf("%d", &select);
  //   if (select == 1)
  //   {
  //     printf("\n추가할거 넣으세요 \n\n");
  //     scanf("%s", bookInfo);
  //     head = insertFirst(head, bookInfo);
  //     printf("\n추가됐음");
  //     head = reverse(head);
  //     printList(head);
  //   }
  //   else if (select == 2)
  //   {
  //     head = deleteFirst(head);
  //     printf("\n삭제됐음");
  //     printList(head);
  //   }
  //   else if (select == 3)
  //   {
  //     printf("\n프로그램이 종료됩니다.\n\n");
  //     exit(0);
  //   }
  //   else
  //   {
  //     printf("\n다시 입력해주세요.\n");
  //   }
  //   printf("\n");
  // }
  return 0;
}