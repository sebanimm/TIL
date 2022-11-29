#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;

typedef struct Node
{
  element data;
  struct Node *link;
} Node;

void error(char *message)
{
  fprintf(stderr, "%s\n", message);
  exit(1);
}

Node *insert_first(Node *head, element value)
{
  Node *p = (Node *)malloc(sizeof(Node));
  p->data = value;
  p->link = head;
  head = p;
  return head;
}

void print_list(Node *head)
{
  for (Node *p = head; p != NULL; p = p->link)
  {
    if (p->link == NULL)
    {
      printf("%d", p->data);
    }
    else
    {
      printf("%d->", p->data);
    }
  }
  printf("\n");
}

Node *reverse(Node *head)
{
  Node *p, *q, *r;
  p = head;
  q = NULL;
  while (p != NULL)
  {
    r = q;
    q = p;
    p = p->link;
    q->link = r;
  }
  return q;
}

int main(void)
{
  Node *head = NULL;
  head = insert_first(head, 10);
  print_list(head);
  head = insert_first(head, 20);
  print_list(head);
  head = insert_first(head, 30);
  print_list(head);
  head = insert_first(head, 40);
  print_list(head);
  head = insert_first(head, 50);
  print_list(head);

  printf("역순으로 출력\n");
  head = reverse(head);
  print_list(head);

  return 0;
}