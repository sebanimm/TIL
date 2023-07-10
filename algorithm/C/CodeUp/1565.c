#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcm(long long int a, long long int b) {
    long long int c = gcd(a, b);
    long long int d = a * b / c;
    return d;
}
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}