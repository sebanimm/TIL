#include <stdio.h>

int main()
{
    int a, b, c = 1, d = 1, e[101][101] = {};
    scanf("%d %d", &a, &b);

    for (int i = b; i >= 1; i--)
    {
        if (d % 2 == 0)
        {
            for (int j = 1; j <= a; j++)
            {
                e[j][i] = c;
                c += 1;
            }
        }
        else
        {
            for (int j = a; j >= 1; j--)
            {
                e[j][i] = c;
                c += 1;
            }
        }
        d += 1;
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