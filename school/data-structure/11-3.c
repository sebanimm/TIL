#include <stdio.h>
#include <stdlib.h>
#define Min 200
typedef int element;
typedef struct // 힙트리 구조체 정의
{
  element heap[Min];
  int heap_size;
} HeapType;
// 현재 요소의 개수가 heap_size인 히프 h에 item 삽입
void insertMinHeap(HeapType *h, element item)
{
  int i;
  i = ++(h->heap_size);
  while ((i != 1) && (item < h->heap[i / 2]))
  {                              // 삽입노드가 부모보다 크면
    h->heap[i] = h->heap[i / 2]; // 부모노드를 삽입위치로 교환
    i = i / 2;                   // i는 부모노드 위치
  }
  h->heap[i] = item; // 새로운 노드 삽입
}
element deleteMinHeap(HeapType *h)
{
  int parent, child;
  element item, temp;
  item = h->heap[1];                // 루트노드 반환값 item = 9
  temp = h->heap[(h->heap_size)--]; // 말단노드를 저장
  parent = 1;
  child = 2;
  while (child <= h->heap_size)
  {
    // 현재 노드의 자식 노드 중 더 큰 자식 노드를 검색
    if (child < h->heap_size && h->heap[child] > h->heap[child + 1])
      child++;
    // 검색된 자식노드가 말단노드이면 아래로 이동안함.
    if (temp <= h->heap[child])
      break;
    // 한단계 아래로 이동
    h->heap[parent] = h->heap[child]; // heap[1] = heap[2]
    parent = child;                   // parent = 1, 2, 4
    child *= 2;                       // child = 4, 8
  }
  h->heap[parent] = temp;
  //
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
  HeapType *heap = (HeapType *)malloc(sizeof(HeapType)); // 동적할당;
  heap->heap_size = 0;
  // 삽입
  printf("최소힙 삽입\n");
  insertMinHeap(heap, e1);
  printHeap(heap);
  insertMinHeap(heap, e2);
  printHeap(heap);
  insertMinHeap(heap, e3);
  printHeap(heap);

  // 삭제
  printf("최소힙 삭제\n");
  printHeap(heap);
  deleteMinHeap(heap);
  printHeap(heap);
  deleteMinHeap(heap);
  printHeap(heap);
  deleteMinHeap(heap);
  printHeap(heap);
  free(heap);
  return 0;
}