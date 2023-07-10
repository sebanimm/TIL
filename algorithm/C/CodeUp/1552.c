#include <stdio.h>

double x;




double f(double a) {
    int b = (int)a;
    return a - b;
}
int main()
{
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
}