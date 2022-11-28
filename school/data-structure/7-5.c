#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef int element;
typedef struct
{
  element array[MAX];
  int size;
} ArrayList;

void error(char *message)
{
  fprintf(stderr, "%s\n", message);
  exit(1);
}

void init(ArrayList *L)
{
  L->size = 0;
}
int isEmpty(ArrayList *L)
{
  return L->size == 0;
}
int isFull(ArrayList *L)
{
  return L->size == MAX;
}
//
element getEntry(ArrayList *L, int pos)
{
  if (pos < 0 || pos >= L->size)
    error("error");
  return L->array[pos];
}
void printList(ArrayList *L)
{
  int i;
  for (i = 0; i < L->size; i++)
    printf("%d->", L->array[i]);
  printf("\n");
}
//
void insertLast(ArrayList *L, element item)
{
  if (L->size >= MAX)
  {
    error("overflow");
  }
  L->array[L->size++] = item;
}
//
void insert(ArrayList *L, int pos, element item)
{
  if (!isFull(L) && (pos >= 0) && (pos <= L->size))
  {
    for (int i = (L->size - 1); i >= pos; i--)
      L->array[i + 1] = L->array[i];
    L->array[pos] = item;
    L->size++;
  }
}
//
element delete (ArrayList *L, int pos)
{
  element item;
  if (pos < 0 || pos >= L->size)
    error("error");
  item = L->array[pos];
  for (int i = pos; i < (L->size - 1); i++)
    L->array[i] = L->array[i + 1];
  L->size--;
  return item;
}
void insertFirst(ArrayList *L, element item)
{
  if (!isFull(L))
  {

    for (int i = L->size - 1; i >= 0; i--)
    {
      L->array[i + 1] = L->array[i];
    }
    L->array[0] = item;
    L->size++;
  }
}

int main(void)
{
  ArrayList list;

  init(&list);
  insertFirst(&list, 10);
  printList(&list);
  insert(&list, 1, 20);
  printList(&list);
  insert(&list, 2, 30);
  printList(&list);
  insert(&list, 3, 40);
  printList(&list);
  insert(&list, 2, 100);
  printList(&list);
  delete (&list, 1);
  printList(&list);
  return 0;
}
