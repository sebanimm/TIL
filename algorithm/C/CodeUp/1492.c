#include <stdio.h>

int main()
{
    int a, b[100], sum = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        sum += b[i];
        b[i] = sum;
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}