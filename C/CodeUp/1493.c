#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c, d, sum = 0;
    scanf("%d %d", &c, &d);

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &a[i][j]);

            for (int k = 0; k <= i; k++)
            {
                for (int l = 0; l <= j; l++)
                {
                    sum += a[k][l];
                }
            }
            b[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}