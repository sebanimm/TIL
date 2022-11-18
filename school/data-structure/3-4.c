#include <stdio.h>
#include <math.h>
int main()
{
  float enso[12][2] = {{1990, 0.6},
                       {1991, 0.2},
                       {1992, 1.1},
                       {1993, 0.5},
                       {1994, 0.1},
                       {1995, 1.2},
                       {1996, -0.3},
                       {1997, -0.1},
                       {1998, 2.2},
                       {1999, -0.7},
                       {2000, -1.1},
                       {9999, 99}};

  printf("엘니뇨 : ");

  for (int i = 0; i < 11; i++)
  {
    if (enso[i][1] > 0)
    {
      printf("%.0f ", enso[i][0]);
    }
  }
  printf("\n");

  printf("가장 강한 엘니뇨 : ");
  int k = 0;
  for (int i = 0; i < 11; i++)
  {
    if (enso[k][1] < enso[i][1])
      k = i;
  }
  printf("%.0f\n", enso[k][0]);

  printf("라니냐 : ");
  for (int i = 0; i < 11; i++)
  {
    if (enso[i][1] < 0)
    {
      printf("%.0f ", enso[i][0]);
    }
  }
  printf("\n");

  printf("가장 강한 라니냐 : ");
  k = 0;
  for (int i = 0; i < 11; i++)
  {
    if (enso[k][1] > enso[i][1])
      k = i;
  }
  printf("%.0f\n", enso[k][0]);

  printf("가장 정상적인 해 : ");

  int arr[11] = {}, temp = 0;
  k = 11;
  for (int i = 0; i < 11; i++)
  {
    if (enso[i][1] < 0)
      enso[i][1] *= -1;
    if (enso[i][1] < enso[k][1])
    {
      temp = 0;
      k = i;
      arr[temp++] = enso[k][0];
    }
    else if (enso[i][1] == enso[k][1])
    {
      k = i;
      arr[temp++] = enso[k][0];
    }
  }
  for (int i = 0; i < temp; i++)
    printf("%d ", arr[i]);

  return 0;
}