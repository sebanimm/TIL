#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100
typedef struct
{
  int row;
  int col;
  int value;
} element;

typedef struct
{
  element data[MAX_TERMS];
  int rows;  //행개수
  int cols;  //열개수
  int terms; //항의 개수
} Smatrix;

Smatrix matrixTrans2(Smatrix a)
{
  int bindex; //행렬 b에서 현재 저장위치
  Smatrix b;

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

  scanf("%d %d %d", &m.terms, &m.rows, &m.cols);

  for (int i = 0; i < m.terms; i++)
  {
    //행,열,값 데이터 입력
  }
  Smatrix r;
  matrixPrint(m);
  r = matrixTrans2(m);
  matrixPrint(r);
  return 0;
}