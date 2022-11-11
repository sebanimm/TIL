#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node // 0) Node����ü �ۼ�
{
  element data;
  struct Node *next;
} Node;

void printList(Node *head)
{
  Node *p = head->next; // 1)ó����ġ���� ���;
  int cnt = 0;
  if (head == NULL)
    return;
  do
  {
    if (p == NULL)
      break;
    printf("%d->", p->data); // 2)������ ���
    p = p->next;             // 3)ptr�� ���� �ּҷ� ����
    cnt++;
    // } while (p != head->next); // 4)����
  } while (cnt < 10);

  printf("\n");
}

void *insertFirst(Node *head, element data)
{
  Node *node = (Node *)malloc(sizeof(Node)); // Node �����Ҵ�
  node->data = data;
  printf("[%d]����ּ�:%p\n", data, node);
  if (head == NULL)
  {
    head = node;       // head�� �ּҷ� ���ο����� �ּ� ����
    node->next = head; // ���ο����� ���� �ּҷ� head ����
  }
  else
  {
    node->next = head->next; // ���ο����� ���� �ּҷ� head ����
    head->next = node;       // head�� ������� �ּҷ� ���ο����� �ּ� ����
  }
}
Node *insertLast(Node *head, element data)
{
  Node *node = (Node *)malloc(sizeof(Node)); // ��� �����Ҵ�
  node->data = data;
  if (head == NULL)
  {
    head = node;       // head�� �ּҷ� ���ο����� �ּ� ����
    node->next = head; // ���ο����� ���� �ּҷ� head ����
  }
  else
  {
    node->next = head->next; //
    head->next = node;       //
    head = node;             //
  }
  return head;
}
int main()
{
  Node *head = NULL, *tail, *ptr;
  printf("ó����ġ�� ����\n");
  for (int i = 1; i < 5; i++)
  {
    head = insertFirst(head, i); // ù��ġ�� ����ϴ� �Լ� ȣ��
  }
  printList(head);
  printf("��������ġ�� ����\n");
  for (int i = 11; i < 15; i++)
  {
    head = insertLast(head, i); // ������ ��ġ�� �����ϴ� �Լ� ȣ��
  }
  printList(head);

  return 0;
}
