#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genRandom(int a[][5], int r);
void outputArray(int a[][5], int r);
float averageScore(int *row, int size);
int main()
{

  int score[4][5], i;
  genRandom(score, 4);
  outputArray(score, 4);
  srand(time(NULL));
  for (i = 0; i < 4; i++)
  {
    printf("선수 %d : %.2f\n", i + 1, averageScore(score[i], 5));
  }

  return 0;
}
void genRandom(int a[][5], int r)
{
  int i, j;
  for (i = 0; i < r; i++)
    for (j = 0; j < 5; j++)
      a[i][j] = rand() % 10 + 1;
}
void outputArray(int a[][5], int r)
{
  int i, j;
  // a배열의 r행 5열의 데이터 출력
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
float averageScore(int b[], int size)
{
  // 선수 한명의 점수를 입력 받아 절사 평균을 구하여 출력
  int i, tot = 0;
  float avg;
  int max = b[0], min = b[0];
  for (i = 0; i < size; i++)
  {
    tot = tot + b[i];
    if (min > b[i])
    {
      min = b[i];
    }

    if (max < b[i])
    {
      max = b[i];
    }
  }
  avg = (tot - max - min) / 4.0;
  return avg;
}