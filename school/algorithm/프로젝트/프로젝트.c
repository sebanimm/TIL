#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 9

// å���� - ����
// å���� - ���Ḯ��Ʈ
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

// ����
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
    printf("���̻� ���� ������ �߰��� �� �����ϴ�.");
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
    printf("���� ������ ����ֽ��ϴ�.");
    return;
  }
  return bt->type[(bt->top)--];
}

// ���Ḯ��Ʈ
void printList(BookInfo *head)
{
  int i = 1;
  printf("\n\n======== ���� ���� ��� ========\n");
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
    printf("�߰��� å ������ �Է����ּ���.\n\n");
    scanf("%s", bookType);
    push(&bt, bookType);
    printf("\n%s�� �߰��Ǿ����ϴ�.\n\n", bookType);
  }
  // printf("%d\n", bt->top);
  // printf("%s ����\n", pop(bt));
  // printf("%d\n", bt->top);
  // printf("%s", *(bt->type[bt->top]));
  // BookInfo *head = NULL;
  // BookInfo *p;
  // char bookInfo[100];
  // int bookIndex;
  // int select;
  // while (1)
  // {
  //   printf("���������ϼ���\n1 : �߰�\n2 : ����\n3 : ���α׷� ����\n\n");
  //   scanf("%d", &select);
  //   if (select == 1)
  //   {
  //     printf("\n�߰��Ұ� �������� \n\n");
  //     scanf("%s", bookInfo);
  //     head = insertFirst(head, bookInfo);
  //     printf("\n�߰�����");
  //     head = reverse(head);
  //     printList(head);
  //   }
  //   else if (select == 2)
  //   {
  //     head = deleteFirst(head);
  //     printf("\n��������");
  //     printList(head);
  //   }
  //   else if (select == 3)
  //   {
  //     printf("\n���α׷��� ����˴ϴ�.\n\n");
  //     exit(0);
  //   }
  //   else
  //   {
  //     printf("\n�ٽ� �Է����ּ���.\n");
  //   }
  //   printf("\n");
  // }
  return 0;
}