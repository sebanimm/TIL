#include <stdio.h>

int n;

long long int f(int k)
{
  if (k <= 1)
  {
    return k;
  }

  return f(k - 2) + f(k - 1);
}

int main()
{
  scanf("%d", &n);
  printf("%lld", f(n));
  return 0;
}