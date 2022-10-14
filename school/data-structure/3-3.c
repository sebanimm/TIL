#include <stdio.h>

int main()
{
  int a[300][300] = {{0}, {0}}, b, c, d, e, f, g, h, sum = 0;
  scanf("%d %d", &b, &c);

  for (int i = 0; i < b; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  scanf("%d", &d);

  for (int i = 0; i < d; i++)
  {
    sum = 0;
    scanf("%d %d %d %d", &e, &f, &g, &h);

    for (int j = e - 1; j < g; j++)
    {
      for (int k = f - 1; k < h; k++)
      {
        sum += a[j][k];
      }
    }
    printf("%d\n", sum);
  }

  return 0;
}