#include <stdio.h>

int main()
{
  int a, b, c[10000];
  scanf("%d %d", &a, &b);

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &c[i]);
  }

  for (int i = 0; i < a; i++)
  {
    if (c[i] < b)
    {
      printf("%d ", c[i]);
    }
  }

  return 0;
}