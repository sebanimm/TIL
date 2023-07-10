#include <stdio.h>

int main()
{
  int a, b = 0;

  for (int i = 0; i < 4; i++)
  {
    scanf("%d", &a);
    b += a;
  }

  printf("%d\n", b / 60);
  printf("%d\n", b % 60);

  return 0;
}