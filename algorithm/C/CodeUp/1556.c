#include <stdio.h>

int n;




long long int f(int a) {
    long long int fac = 1;
    for (int i = a; i >= 1; i--) {
        fac *= i;
    }
    return fac;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}