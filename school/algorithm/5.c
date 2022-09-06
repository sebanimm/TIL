#include <stdio.h>

int main()
{
  int a, b, age, g;
  scanf("%d-%d", &a, &b);
  age = (a - a % 10000) / 10000;
  g = (b - b % 1000000) / 1000000;

  if (g == 1 || g == 3)
  {
    if (g == 1)
    {
      printf("%d ", 120 - age);
    }
    else
    {
      printf("%d ", 20 - age);
    }
    printf("M");
  }
  else
  {
    if (g == 2)
    {
      printf("%d ", 120 - age);
    }
    else
    {
      printf("%d ", 20 - age);
    }
    printf("W");
  }

  return 0;
}
