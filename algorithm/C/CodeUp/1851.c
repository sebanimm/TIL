#include <stdio.h>

void star(int a)
{
  if (a <= 0)
  {
    return;
  }

  star(a - 1);

  printf("*");
}

int main()
{
  int a;
  scanf("%d", &a);

  star(a);

  return 0;
}
