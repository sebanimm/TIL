#include <stdio.h>

int main()
{
  int x, y, a[100][100], b[100][100];
  scanf("%d %d", &x, &y);

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      printf("%d ", a[i][j] + b[i][j]);
    }
    printf("\n");
  }

  return 0;
}