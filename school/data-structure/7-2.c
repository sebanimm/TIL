
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
  char data[4];
  struct Node *next;
} Node;

//���� ���� ����Ʈ�� ����
Node *createList()
{
  Node *head = (Node *)malloc(sizeof(Node));
  head = NULL;

  return head;
}

Node *deleteAll(Node *head)
{
  Node *p = head; //  ;
  Node *removed;  //
  if (p == NULL)
    return NULL;
  while (p != NULL)
  {
    removed = p;                    // free�� �ּҸ� removed ����
    p = p->next;                    //���� �ּҷ� �̵�;
    free(removed);                  // removed �ּ� �Ҵ�����
    removed = removed->next = NULL; //�Ҵ����� �� NULL������ ����
  }
  return head;
}
// ���� ����Ʈ�� ������� ����ϴ� ����
void printList(Node *head)
{
  Node *p = head; //
  printf("L =(");
  while (p != NULL)
  {
    printf("%s", p->data); // p�� ���� ��� ó������ head �� ��
    p = p->next;           // p �� ���� ������ �̵�
    if (p != NULL)
      printf("->"); //���������Ͱ� ������ ->���
  }
  printf(")\n");
}

// ù��° ���� �����ϴ� ����
Node *insertFirst(Node *head, char *x)
{
  Node *newNode = (Node *)malloc(sizeof(Node)); //�����Ҵ�
  strcpy(newNode->data, x);                     // �� ����� ������ �ʵ忡 x ����
  newNode->next = head;
  head = newNode;
  // newNode�� head �� �����ϱ�
  // newNode�� ���ο� head�� �����ϱ�
  return head;
}

// ��带 pre �ڿ� �����ϴ� ����
Node *insertMiddle(Node *head, Node *pre, char *x)
{
  Node *newNode = (Node *)malloc(sizeof(Node)); //�����Ҵ�
  strcpy(newNode->data, x);                     //������ ����

  if (head == NULL || pre == NULL)
  { //����
    newNode->next = NULL;
    head = newNode;
  }
  else
  {
    newNode->next = pre->next; // ����带 pre �ڿ� ������ �����ϰ�
    pre->next = newNode;       //�����ڸ� newnode�� ����
  }
  return head; //����ּ� ����;
}
Node *insertLast(Node *head, char *x)
{
  Node *newNode = (Node *)malloc(sizeof(Node)); //����� �����Ҵ�;
  Node *temp;

  strcpy(newNode->data, x);
  newNode->next = NULL; // newNode �� �������̴ϱ� null��
  if (head == NULL)     // head�� null�̸�
  {
    head = newNode; //  newNode�� head�ּҷ� ����
    return head;
  }
  temp = head;
  while (temp->next != NULL)
    ;
  temp->next = newNode;
  // temp�� NULL �� ���ö����� ����ؼ� �̵�
  // NULL�� newNode�� �ٲٱ�
  return head;
}

Node *searchNode(Node *head, char *x)
{
  Node *temp = head;

  while (temp != NULL)
  {
    if (strcmp(temp->data, x) == 0)
      return temp;
    else
      temp = temp->next; /*���� �ּҷ� �̵�*/
  }
  return temp;
}

int main()
{
  Node *head;
  Node *p;

  printf("(1) ���鸮��Ʈ �����ϱ�! \n");
  head = createList();
  printList(head);

  printf("(2) ����Ʈ ó���� [��]��� �����ϱ�! \n");
  head = insertFirst(head, "��");
  printList(head);

  printf("(3) ����Ʈ �������� [��]��� �����ϱ�! \n");
  head = insertLast(head, "��");
  printList(head);

  printf("(4) ����Ʈ ù ��°�� [��]��� �����ϱ�! \n");
  head = insertFirst(head, "��");
  printList(head);

  printf("(5) ����Ʈ���� [��] ��带 ã�� �� �ڿ� [��] �����ϱ�! \n");
  p = searchNode(head, "��");
  if (p == NULL)
    printf("ã�� �����Ͱ� �����ϴ�.\n");
  else
    head = insertMiddle(head, p, "��");
  printList(head);

  printf("(6) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����! \n");
  deleteAll(head);
  printList(head);
  return 0;
}
