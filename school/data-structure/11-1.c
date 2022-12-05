#include <stdio.h>
#include <stdlib.h>
#define MAX 200
typedef int element;
typedef struct
{
  //��Ʈ�� ����ü ����
} HeapType;
//���� ����� ������ heap_size�� ���� h�� item ����
void insertMaxHeap(HeapType *h, element item)
{
  int i;
  i = ++(h->heap_size);
  while ((i != 1) && (item > /**/))
  {              //���Գ�尡 �θ𺸴� ũ��
    h->heap[i] = //�θ��带 ������ġ�� ��ȯ
        i =      // i�� �θ��� ��ġ
  }
  /**/ = item; //���ο� ��� ����
}
element deleteMaxHeap(HeapType *h)
{
  int parent, child;
  element item, temp;
  item =     //��Ʈ��� ��ȯ��
      temp = //���ܳ�带 ����
      h->heap_size--;
  parent = 1;
  child = 2;
  while (child <= h->heap_size)
  {
    //���� ����� �ڽ� ��� �� �� ū �ڽ� ��带 �˻�
    if (child < h->heap_size && h->heap[child] < /*�����ʳ��*/)
      child++;
    //�˻��� �ڽĳ�尡 ���ܳ���̸� �Ʒ��� �̵�����.
    if (temp >= h->heap[child])
      break;
    //�Ѵܰ� �Ʒ��� �̵�
    h->heap[parent] = //
        parent =      //
        child *= 2;
  }
  h->heap[parent] = //
      return item;
}
void printHeap(HeapType *heap)
{
  for (int i = 1; i <= heap->heap_size; i++)
    printf("[%d]: %d ", i, heap->heap[i]);
  printf("\n");
}
int main()
{
  element e1 = 10, e2 = 5, e3 = 30;
  HeapType *heap = //�����Ҵ�;
      heap->heap_size = 0;
  //����
  printf("�ִ��� ����\n");
  insertMaxHeap(heap, e1);
  printHeap(heap);
  insertMaxHeap(heap, e2);
  printHeap(heap);
  insertMaxHeap(heap, e3);
  printHeap(heap);

  //����
  printf("�ִ��� ����\n");
  printHeap(heap);
  deleteMaxHeap(heap);
  printHeap(heap);
  deleteMaxHeap(heap);
  printHeap(heap);
  deleteMaxHeap(heap);
  printHeap(heap);
  free(heap);
  return 0;
}