#include <stdio.h>

double x;




long long int f(double a)
{
  long long int b = (long long int)a;

  if(b < a) {
    return x+1;
  }
  else {
    return x;
  }
}
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}