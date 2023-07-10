#include <stdio.h>

int main()
{
    int a[172][172], b[172][172], n, m, v, i, j, x, y, z;

    scanf("%d %d", &n, &m);
    scanf("%d %d %d", &x, &y, &z);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = 0;
        }
    }

    scanf("%d", &v);

    for (int h = 0; h < v; h++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                b[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
                if (a[i][j] == 0)
                {
                    if (b[i][j] == x) {
                        b[i][j] = 1;
                    }
                    else {
                        b[i][j] = 0;
                    }
                }
                else
                {
                    if (y <= b[i][j] && b[i][j] < z) {
                        b[i][j] = 1;
                    }
                    else {
                        b[i][j] = 0;
                    }
                }
            }
        }

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                a[i][j] = b[i][j];
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}