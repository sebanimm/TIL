#include <stdio.h>

int main()
{
    int a, b = 1, c[101][101] = {};
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= a; j++)
            {
                c[j][i] = b;
                b += 1;
            }
        }
        else
        {
            for (int j = a; j >= 1; j--)
            {
                c[j][i] = b;
                b += 1;
            }
        }
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
