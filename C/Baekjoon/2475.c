#include <stdio.h>

int main()
{
  int a[5], b = 0;
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    b += a[i] * a[i];
  }

  printf("%d", b % 10);

  return 0;
}