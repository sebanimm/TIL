#include <stdio.h>

int main()
{
    int a, b[1000];
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < a; i += 2)
    {
        if (b[i] < b[i + 1])
        {
            printf("%d ", b[i + 1]);
        }
        else
        {
            printf("%d ", b[i]);
        }
    }

    return 0;
}