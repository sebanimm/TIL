#include <stdio.h>

int main()
{
    int a, b, c[101] = {}, d, e, f, sum = 0;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= b; i++)
    {
        scanf("%d %d %d", &d, &e, &f);
        c[d] = c[d] + f;
        c[e + 1] = c[e + 1] - f;
    }

    for (int i = 1; i <= a; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    for (int i = 1; i <= a; i++)
    {
        sum += c[i];
        printf("%d ", sum);
    }
    
    return 0;
}