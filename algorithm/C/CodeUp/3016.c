#include <stdio.h>
int main()
{
  char name[101][11];
  int sum1[100], sum2[100], n, su, hap, a, b, x, y, limitX = 0, limitY = 0, max = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%s %d %d %d", &name[i], &su, &sum1[i], &sum2[i]);
    if (max < su)
    {
      max = su;
      hap = i;
    }
  }

  a = sum1[hap];
  b = sum2[hap];

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (sum1[i] < sum1[j])
      {
        int imsi = sum1[i];
        sum1[i] = sum1[j];
        sum1[j] = imsi;
      }
      if (sum2[i] < sum2[j])
      {
        int imsi = sum2[i];
        sum2[i] = sum2[j];
        sum2[j] = imsi;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (sum1[i] == a && limitX == 0)
    {
      x = i;
      limitX = 1;
    }
    if (sum2[i] == b && limitY == 0)
    {
      y = i;
      limitY = 1;
    }
    if (limitX == 1 && limitY == 1)
    {
      break;
    }
  }

  printf("%s %d %d", name[hap], x + 1, y + 1);
  return 0;
}
