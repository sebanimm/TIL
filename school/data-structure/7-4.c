#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int element;
int sum = 0;

typedef struct Node
{
  element data;
  struct Node *link;
} Node;

Node *insertFirst(Node *head, int value)
{
  Node *p = (Node *)malloc(sizeof(Node));
  p->data = value;
  sum += value;
  p->link = head;
  head = p;
  return head;
}

Node *insert(Node *head, Node *pre, element value)
{
  Node *p = (Node *)malloc(sizeof(Node));

  p->data = value;
  p->link = pre->link;
  pre->link = p;
  return head;
}

Node *deleteFirst(Node *head)
{
  Node *removed;
  if (head == NULL)
    return NULL;
  removed = head;
  head = removed->link;
  free(removed);
  return head;
}

Node *delete (Node *head, Node *pre)
{
  Node *removed;
  removed = pre->link;
  pre->link = removed->link;
  free(removed);
  return head;
}

void printList(Node *head)
{
  for (Node *p = head; p != NULL; p = p->link)
    printf("%d->", p->data);
  printf("NULL \n");
}

int main(void)
{
  Node *head = NULL;
  int a, n;
  printf("����� ����; ");
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    printf("��� #%d ������ : ", i + 1);
    scanf("%d", &n);
    head = insertFirst(head, n);
  }
  printf("���� ����Ʈ �������� �� : %d ", sum);
  return 0;
}