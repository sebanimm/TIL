#include <stdio.h>

int main()
{
    int a, b, c[10000001] = {}, d;

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &d);
        c[d] = 1;
    }

    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &d);
        printf("%d ", c[d]);
    }
    return 0;
}