#include <stdio.h>

int main()
{
  int a, sum = 1;
  scanf("%d", &a);

  printf("1");
  for (int i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      printf(" + %d", i);
      sum += i;
    }
  }

  printf(" = %d", sum);

  return 0;
}
