#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
} Node;

Node *head = NULL;
Node *tail = NULL;

struct Node *makeNode(int data)
{
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->next = NULL;
  newNode->prev = NULL;
  newNode->data = data;
  return newNode;
}

void insertNode(int data)
{
  struct Node *temp = head;
  struct Node *newNode = makeNode(data);
  if (head == NULL)
  {
    head = newNode;
    tail = head;
  }
  else
  {
    temp = tail;
    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
  }
}
void removed(struct Node *head, int num, int key)
{
  struct Node *temp = head->prev;
  int count = 0;
  int t;
  printf("<");
  while (count < num)
  {
    t = key;
    while (t--)
      temp = temp->next;
    printf(count++ ? ", %d" : "%d", temp->data);
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
  }
  puts(">");
}

int main()
{
  int num;
  int key;
  scanf("%d %d", &num, &key);
  for (int i = 1; i <= num; i++)
  {
    insertNode(i);
  }
  head->prev = tail;
  tail->next = head;
  removed(head, num, key);
  return 0;
}
