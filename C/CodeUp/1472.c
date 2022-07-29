#include <stdio.h>

int main()
{
    int a, b, c = 1, d = 1, e[101][101] = {};
    scanf("%d %d", &a, &b);

    for (int i = a; i >= 1; i--)
    {
        if (c % 2 == 0)
        {
            for (int j = 1; j <= b; j++)
            {
                e[i][j] = d;
                d += 1;
            }
        }
        else
        {
            for (int j = b; j >= 1; j--)
            {
                e[i][j] = d;
                d += 1;
            }
        }
        c += 1;
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }

    return 0;
}
