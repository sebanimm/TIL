#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100
// 1. 각항의 원소 구조체 정의
typedef struct
{
  int row;
  int col;
  int value;
} element;
// 2. 행렬정보의 구조체 정의
typedef struct
{
  element data[100];
  int rows;
  int cols;
  int terms;
} Smatrix;

Smatrix matrixTrans2(Smatrix a)
{
  int i, j, bi = 0; //행렬 b에서 현재 저장위치
  Smatrix b;
  b.terms = a.terms;
  b.rows = a.cols;
  b.cols = a.rows;
  for (j = 0; j < b.rows; j++)
  {
    for (i = 0; i < b.terms; i++)
    {
      if (a.data[i].col == j)
      {
        b.data[bi].row = a.data[i].col;
        b.data[bi].col = a.data[i].row;
        b.data[bi].value = a.data[i].value;
        bi++;
      }
    }
  }
  //희소행렬 (행,열,값)을 전치행렬 (열,행,값) 으로 변경하는 함수 작성
  return b;
}

void matrixPrint(Smatrix a)
{
  for (int i = 0; i < a.terms; i++)
  {
    printf("(%d, %d, %d) \n", a.data[i].row, a.data[i].col, a.data[i].value);
  }
  printf("---------------------\n");
}

int main(void)
{
  Smatrix m;
  Smatrix r;
  //행렬 정보 항개수,행개수,열개수 입력
  scanf("%d %d %d", &m.terms, &m.rows, &m.cols);
  for (int i = 0; i < m.terms; i++)
  {
    //각 항의 행,열,값 데이터 입력
    scanf("%d %d %d", &m.data[i].row, &m.data[i].col, &m.data[i].value);
  }
  matrixPrint(m);
  r = matrixTrans2(m);
  matrixPrint(r);
  return 0;
}