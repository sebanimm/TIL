#include <stdio.h>

int n;

int f(int a)
{
  if (a >= n)
  {
    return n;
  }

  return f(a + 1) + a;
}

int main()
{
  scanf("%d", &n);
  printf("%d", f(0));
  return 0;
}