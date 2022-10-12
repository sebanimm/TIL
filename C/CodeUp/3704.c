#include <stdio.h>

int memo[100001] = {1, 1, 2, 4, 7, 13};
int n;

long long int f(int k)
{
  if (memo[k])
  {
    return memo[k];
  }

  return memo[k] = (f(k - 3) + f(k - 2) + f(k - 1)) % 1000;
}

int main()
{
  scanf("%d", &n);
  printf("%lld", f(n));
  return 0;
}
