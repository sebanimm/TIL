#include <stdio.h>

int main()
{
  int a[6];

  for (int i = 0; i < 6; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 6; i++)
  {
    if (i == 0)
    {
      printf("%d ", 1 - a[i]);
    }
    else if (i == 1)
    {
      printf("%d ", 1 - a[i]);
    }
    else if (i == 2)
    {
      printf("%d ", 2 - a[i]);
    }
    else if (i == 3)
    {
      printf("%d ", 2 - a[i]);
    }
    else if (i == 4)
    {
      printf("%d ", 2 - a[i]);
    }
    else
    {
      printf("%d ", 8 - a[i]);
    }
  }

  return 0;
}