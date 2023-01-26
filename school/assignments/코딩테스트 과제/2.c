#include <stdio.h>

int main()
{
  int a, b, sum = 0;
  scanf("%d %d", &a, &b);

  for (int i = a; i < b; sum += i, i++)
  {
    printf("%d + ", i);
  }

  printf("%d = %d", b, sum + b);
  return 0;
}