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

int push(BookType *bt, element type)
{
  if (isFull(bt))
  {
    printf("���̻� ���� ������ �߰��� �� �����ϴ�.");
    return -1;
  }
  bt->top++;
  bt->type[bt->top] = type;
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
  printf("\n\n======== ���� ���� ��� ========\n");
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
  // printf("�߰��� å ������ �Է����ּ���.\n");
  // scanf("%s", bookType);
  // push(bt, bookType);
  // printf("%s�� �߰��Ǿ����ϴ�.\n", *(bt->type));
  // printf("%d\n", bt->top);
  // printf("%s ����\n", pop(bt));
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
    printf("���������ϼ���\n1 : �߰�\n2 : ����\n3 : �ʱ�ȭ\n4 : ���α׷� ����\n");
    scanf("%d", &select);
    if (select == 1)
    {
      printf("�߰��Ұ� �������� \n");
      scanf("%s", bookInfo);
      head = insertFirst(head, bookInfo);
      printf("�߰�����");
      head = reverse(head);
      printList(head);
    }
    else if (select == 2)
    {
      printf("����ε��� �����Ұ��� ���ϼ��� \n");
      scanf("%d", bookIndex);
      insertFirst(head, bookIndex);
      printf("��������");
      printList(head);
    }
    else if (select == 3)
    {
      printf("���� ����� �ʱ�ȭ�մϴ�.");
      head = deleteAll(head);
      printList(head);
    }
    else if (select == 4)
    {
      printf("���α׷��� ����˴ϴ�.");
      exit(0);
    }
    else
    {
      printf("�ٽ� �Է����ּ���.");
    }
    printf("\n");
  }
  return 0;
}