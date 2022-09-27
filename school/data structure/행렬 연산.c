#include <stdio.h>
void inputArray(int a[][3], int r);
void outputArray(int a[][3], int r);
void addMatrix(int a[][3], int b[][3], int r);
void subMatrix(int a[][3], int b[][3], int r);
void scalarMul(int a[][3], int r, int n);
int main()
{
  int A[2][3], B[2][3];
  int row = 2, col = 3;
  int num;
  printf("2*3 ����� �� ������ ���� �Է��Ͻÿ�.\n");
  inputArray(A, row);
  inputArray(B, row);
  printf("��� A, B\n");
  outputArray(A, row);
  outputArray(B, row);

  printf("����� \n");
  addMatrix(A, B, row);
  printf("����� \n");
  subMatrix(A, B, row);

  printf("���� ���� �Է�\n");
  scanf("%d", &num);
  scalarMul(A, row, num);

  return 0;
}
void inputArray(int a[][3], int r)
{
  int i, j;
  // r�� 3���� �Է¹޴� �ڵ带 �ۼ�
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
}
void outputArray(int a[][3], int r)
{
  int i, j;
  // r�� 3���� ����ϴ� �ڵ带 �ۼ�
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }
}
void addMatrix(int a[][3], int b[][3], int r)
{
  int i, j;
  // a,b����� ���� ��� �� ����ϴ� �ڵ� �ۼ�
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%5d", a[i][j] + b[i][j]);
    }
    printf("\n");
  }
}
void subMatrix(int a[][3], int b[][3], int r)
{
  int i, j;
  // a,b����� ���� ��� �� ����ϴ� �ڵ� �ۼ�
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%5d", a[i][j] - b[i][j]);
    }
    printf("\n");
  }
}
void scalarMul(int a[][3], int r, int n)
{
  int i, j;
  // a��� ���ҿ� n�� ���Ͽ� ����ϴ� �ڵ� �ۼ�
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%5d", n * a[i][j]);
    }
    printf("\n");
  }
}
