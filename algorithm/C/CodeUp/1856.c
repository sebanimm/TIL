#include <stdio.h>

int n;

long long int f(int k)
{
  if (k <= 2)
  {
    return k;
  }
  else if (k == 3)
  {
    return 4;
  }

  return f(k - 1) + f(k - 2) + f(k - 3);
}

int main()
{
  scanf("%d", &n);
  printf("%lld", f(n));
  return 0;
}
