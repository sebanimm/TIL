#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int c, d, e, f;
    c = a * (b % 10);
    d = a * ((b % 100 - b % 10) / 10);
    e = a * (int)(b / 100);
    f = a * b;

    printf("%d\n%d\n%d\n%d", c, d, e, f);

    return 0;
}