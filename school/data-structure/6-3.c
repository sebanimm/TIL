#include <stdlib.h>
#include <stdio.h>
#define MAX_Q_SIZE 5
typedef int element;
typedef struct
{
  int rear;
  int front;
  element data[MAX_Q_SIZE];
} Queue;

void initQueue(Queue *q)
{
  // front, rear �ʱ�ȭ
  q->front = 0;
  q->rear = 0;
}
int isEmpty(Queue *q)
{
  return q->rear == q->front;
}
int isFull(Queue *q)
{
  return (q->rear + 1) % MAX_Q_SIZE == q->front;
}
void enQueue(Queue *q, element item)
{
  if (isFull(q))
    printf("ť�� ��ȭ�����Դϴ�.\n");
  else
  {
    q->rear = (q->rear + 1) % (MAX_Q_SIZE);
    q->data[q->rear] = item;
  } //�ڵ��ۼ�
}
element deQueue(Queue *q)
{
  if (isEmpty(q))
    printf("ť�� ��������Դϴ�.\n");
  else
  {
    q->front = (q->front + 1) % (MAX_Q_SIZE);
  } //�ڵ��ۼ�
}
void printQueue(Queue *q)
{
  int i;
  printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
  if (isEmpty(q))
  {
    printf("ť�� ��������Դϴ�.\n");
    return;
  }
  i = q->front;
  do
  {
    i = (i + 1) % (MAX_Q_SIZE);
    printf("%d | ", q->data[i]);
    if (i == q->rear)
      break;
  } while (i != q->front);
  printf("\n");
}

int main()
{
  Queue q;
  element item;
  initQueue(&q);
  printf("--������ �߰� �ܰ�--\n");
  while (!isFull(&q))
  {
    printf("������ �Է��Ͻÿ�.");
    scanf("%d", &item);
    enQueue(&q, item);
    printQueue(&q);
  }
  printf("ť�� ��ȭ�����Դϴ�.\n\n");
  printf("--������ ���� �ܰ�--\n");
  while (!isEmpty(&q))
  {
    item = deQueue(&q);
    printf("������ ���� : %d\n", item);
    printQueue(&q);
  }

  return 0;
}