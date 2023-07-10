#include <stdio.h>

int memo[20];
int n;

long long int f(int k)
{
  if (memo[k])
  {
    return memo[k];
  }

  if (k <= 2)
  {
    return k;
  }

  return memo[k] = f(k - 1) + f(k - 2);
}

int main()
{
  scanf("%d", &n);
  printf("%lld", f(n));
  return 0;
}
