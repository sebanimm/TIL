#include <stdio.h>

int m[31][31] = {};

int f(int n, int r)
{
  if (m[n][r])
    return m[n][r];
  if (n == r)
    return 1;
  else if (n < r)
    return 0;
  else if (r == 1)
    return n;
  return m[n][r] = (f(n - 1, r - 1) + f(n - 1, r));
}

int main()
{
  int n, r;
  scanf("%d %d", &n, &r);
  printf("%d", f(n, r));
  return 0;
}
