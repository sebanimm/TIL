#include <stdio.h>

int n, m;

long long int f(int a, int b) {
    return (long long int)a + (long long int)b;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}