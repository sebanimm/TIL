#include <stdio.h>

int main()
{
  int a, b, c, d[100][100], count = 0;
  scanf("%d %d %d", &a, &b, &c);

  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      d[i][j] = count;
      count += 1;
      if (d[i][j] == c)
      {
        printf("%d %d", i, j);
        break;
      }
    }
  }

  return 0;
}