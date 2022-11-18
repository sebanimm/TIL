#include <stdio.h>
#include <stdlib.h>
typedef int element;
//���߿��Ḯ��Ʈ ��� ����ü ����
typedef struct DNode
{
  element data;
  struct DNode *prev;
  struct DNode *next;
} DNode;
void init(DNode *phead) //����� �ʱ�ȭ
{
  //������� next�� head��� �ּҷ� ����
  phead->next = phead;
  //������� prev�� head��� �ּҷ� ����
  phead->prev = phead;
}
void dinsert(DNode *before, element data) // before �������� ����
{
  DNode *newnode = (DNode *)malloc(sizeof(DNode)); //�����Ҵ�
  newnode->data = data;                            //������ ����
  newnode->prev = before;                          //������� �ּҰ� ����
  newnode->next = before->next;                    //��������� next�� ����
  (before->next)->prev = newnode;                  //��������� �ؽ�Ʈ ����� prev���� ���ο� ��� �ּҰ����� ����
  before->next = newnode;                          //��������� next���� ���ο� ��� �ּҰ����� ����;
}
void ddelete(DNode *head, DNode *removed)
{
  if (removed == head)
    return;
  removed->prev->next = removed->next; //������ ����� next������ ����;
  removed->next->prev = removed->prev; //������ ����� prev������ ����;
  free(removed);
}
void printDlist(DNode *phead)
{
  DNode *p = phead;
  for (p = phead->next; p != phead; p = p->next) //�ʱⰪ:head->next, head��ġ�� �ƴϸ� ���
  {
    printf("<-| |%d| |->", p->data);
  }
  printf("\n");
}
int main()
{
  DNode *head = (DNode *)malloc(sizeof(DNode)); //����� �����Ҵ�
  init(head);                                   //����� �ʱ�ȭ
  printf("�߰��ܰ�\n");
  for (int i = 0; i < 5; i++)
  {
    dinsert(head, i);
    printDlist(head);
  }
  printf("�����ܰ�\n");
  for (int i = 0; i < 5; i++)
  {
    printDlist(head);
    ddelete(head, head->next);
  }
  free(head);
  return 0;
}
