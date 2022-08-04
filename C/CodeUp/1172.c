#include <stdio.h>

int main()
{
    int a, b, c, change;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b)
    {
        change = b;
        b = a;
        a = change;
    }

    if (b >= c)
    {
        change = c;
        c = b;
        b = change;
    }

    if (a >= b)
    {
        change = b;
        b = a;
        a = change;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}
