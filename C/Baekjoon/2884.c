#include <stdio.h>

int main()
{
    int a, b, c, d, e ,f;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    d = a * 60 + b + c;
    e = (int)(d / 60);
    f = d % 60;

    if (e >= 24) {
        e -= 24;
    }

    printf("%d %d", e, f);
}