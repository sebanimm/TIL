#include <stdio.h>

int memo[201] = {0, 1, 1, 2, 3, 5}; // 메모이제이션

int n;

long long int f(int k)
{
  if (memo[k] == 0)
  {
    return memo[k] = (f(k - 1) + f(k - 2)) % 10009;
  }
  return memo[k];
}

int main()
{
  scanf("%d", &n);
  printf("%lld", f(n));
  return 0;
}