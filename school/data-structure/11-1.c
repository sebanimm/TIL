#include <stdio.h>
#include <stdlib.h>
#define MAX 200
typedef int element;
typedef struct
{
  //힙트리 구조체 정의
} HeapType;
//현재 요소의 개수가 heap_size인 히프 h에 item 삽입
void insertMaxHeap(HeapType *h, element item)
{
  int i;
  i = ++(h->heap_size);
  while ((i != 1) && (item > /**/))
  {              //삽입노드가 부모보다 크면
    h->heap[i] = //부모노드를 삽입위치로 교환
        i =      // i는 부모노드 위치
  }
  /**/ = item; //새로운 노드 삽입
}
element deleteMaxHeap(HeapType *h)
{
  int parent, child;
  element item, temp;
  item =     //루트노드 반환값
      temp = //말단노드를 저장
      h->heap_size--;
  parent = 1;
  child = 2;
  while (child <= h->heap_size)
  {
    //현재 노드의 자식 노드 중 더 큰 자식 노드를 검색
    if (child < h->heap_size && h->heap[child] < /*오른쪽노드*/)
      child++;
    //검색된 자식노드가 말단노드이면 아래로 이동안함.
    if (temp >= h->heap[child])
      break;
    //한단계 아래로 이동
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
  HeapType *heap = //동적할당;
      heap->heap_size = 0;
  //삽입
  printf("최대힙 삽입\n");
  insertMaxHeap(heap, e1);
  printHeap(heap);
  insertMaxHeap(heap, e2);
  printHeap(heap);
  insertMaxHeap(heap, e3);
  printHeap(heap);

  //삭제
  printf("최대힙 삭제\n");
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