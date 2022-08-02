#include <stdio.h>

int main()
{
    int p[1001][1001] = {}, x, y, z, a, b, c, d, e, sum = 0;
    scanf("%d %d %d", &x, &y, &z);

    for (int i = 0; i < z; i++)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        p[a][b] = p[a][b] + e;
        p[c + 1][d + 1] = p[c + 1][d + 1] + e;
        p[a][d + 1] = p[a][d + 1] - e;
        p[c + 1][b] = p[c + 1][b] - e;
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sum += p[i][j];
            p[i][j] = sum;
        }
        sum = 0;
    }

    sum = 0;

    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {
            sum += p[i][j];
            p[i][j] = sum;
        }
        sum = 0;
    }

    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}