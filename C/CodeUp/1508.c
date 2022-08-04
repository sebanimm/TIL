#include <stdio.h>

int main()
{
    int a, b[20][20] = {};
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i][0]);
    }

    for (int j = 0; j < a; j++)
    {

        for (int k = 0; k < a; k++)
        {
            if (k <= j)
            {
                b[j + 1][k + 1] = b[j + 1][k] - b[j][k];
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (b[i][j] != 0)
            {
                printf("%d ", b[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}