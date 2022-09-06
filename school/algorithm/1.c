#include <stdio.h>

int main()
{
  int a, b, sum = 0;
  scanf("%d %d", &a, &b);

  for (int i = 1; i <= a; i++)
  {
    if (i % b == 0)
    {
      sum += i;
    }
  }

  printf("%d", sum);

  return 0;
}
