#include <stdio.h>

int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }

  return factorial(n - 1) * n;
}

int main()
{
  int a;
  scanf("%d", &a);
  printf("%d", factorial(a));

  return 0;
}