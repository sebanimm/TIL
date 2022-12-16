#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 30

typedef struct graphType
{
  int n; // 정점의 갯수
  int adjMatrix[MAX_VERTEX][MAX_VERTEX];
} graphType;

void createGraph(graphType *g)
{
  int i, j;
  for (i = 0; i < MAX_VERTEX; i++)
  {
    for (j = 0; j < MAX_VERTEX; j++)
      g->adjMatrix[i][j] = 0; // 30*30 행렬 그래프 정점 0으로 초기화
  }
}

void insertVertex(graphType *g, int v)
{
  if (((g->n) + 1) > MAX_VERTEX)
  {
    printf("\n 그래프 정점의 개수를 초과하였습니다!");
    return;
  }
  g->n++; //[문]정점개수 증가
}

void insertEdge(graphType *g, int u, int v)
{

  if (u >= g->n || v >= g->n)
  {
    printf("\n 그래프에 없는 정점입니다!");
    return;
  }
  g->adjMatrix[u][v] = 1; // 무방향 그래프이므로 [u][v], [v][u] 모두 1을 저장
  g->adjMatrix[v][u] = 1;
}

void print_adjMatrix(graphType *g)
{
  int i, j;
  for (i = 0; i < g->n; i++)
  {
    printf("\n\t\t");
    for (j = 0; j < g->n; j++)
      printf("%2d", g->adjMatrix[i][j]);
  }
}

int main()
{
  int i;
  graphType *G;
  G = (graphType *)malloc(sizeof(graphType)); // graphType 동적할당

  createGraph(G);

  for (i = 0; i < 8; i++)
  {
    insertVertex(G, i); // 정점의 개수 증가하는 함수 호출
  }
  insertEdge(G, 0, 1); // A, B
  insertEdge(G, 0, 2); // A, C
  insertEdge(G, 1, 3); // B, D
  insertEdge(G, 1, 4); // B, E
  insertEdge(G, 2, 5); // C, F
  insertEdge(G, 2, 6);
  insertEdge(G, 3, 7);
  insertEdge(G, 4, 7);
  insertEdge(G, 5, 7);
  insertEdge(G, 6, 7);
  printf("\n G의 인접 행렬");
  // 인접행렬 출력함수 호출
  print_adjMatrix(G);
  return 0;
}