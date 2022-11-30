#include <stdio.h>
int DT[100][100];
int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j == 1)
        DT[i][j] = i;
      else if (i == j)
        DT[i][j] = 1;
      else
        DT[i][j] = DT[i - 1][j - 1] + DT[i - 1][j];
    }
  }
  printf("%d", DT[n][k]);
  return 0;
}
