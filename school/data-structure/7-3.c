#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;

typedef struct Node
{
  char data[100];
  struct Node *next;
} Node;

Node *insertFirst(Node *head, char *value[])
{
  Node *p = (Node *)malloc(sizeof(Node));
  p->data = value;
  p->next = head;
  head = p;
  return head;
}

Node *insert(Node *head, Node *pre, element value)
{
  Node *p = (Node *)malloc(sizeof(Node));
  p->data = value;
  p->next = pre->next;
  pre->next = p;
  return head;
}

Node *deleteFirst(Node *head)
{
  Node *removed;
  if (head == NULL)
    return NULL;
  removed = head;
  head = removed->next;
  free(removed);
  return head;
}

Node *delete (Node *head, Node *pre)
{
  Node *removed;
  removed = pre->next;
  pre->next = removed->next;
  free(removed);
  return head;
}

void printList(Node *head)
{
  while (head != NULL)
  {
    printf("%d->", p->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main(void)
{
  Node *head = NULL;
  Node *p;
  char str[3][10] = {"melon", "kiwi", "appple"};
  char find[10];
  //코드 작성
  head = insertFirst(head, str[0]); // melon 입력
  printList(head);
  head = insertFirst(head, str[1]); // melon 입력
  printList(head);
  head = insertFirst(head, str[2]); // melon 입력
  printList(head);
  printf("찾을 데이터를 입력하세요\n");
  scanf("%s", find);
  for (p = head; p != NULL; p = p->next)
  {
    // printf("%s",p->data);
    if (strcmp(p->data, find) == 0)
      printf("%s를 찾았습니다.", find);
  }
  return 0;
}