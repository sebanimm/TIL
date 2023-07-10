#include <stdio.h>

double ABS(double a) {
    if (a < 0) {
        return -a;
    } else {
        return a;
    }
}

int main() 
{
    double a;
    scanf("%lf", &a);
    printf("%.10g", ABS(a));
    
    return 0;
}