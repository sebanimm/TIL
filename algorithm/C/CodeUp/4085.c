#include <stdio.h>

int main()
{
    int farm[101][101] = {};
    int a, b, c, d, e = 0, f = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            scanf("%d ", &farm[i][j]);
        }
    }

    for (int i = 1; i <= b - d + 1; i++)
    {
        for (int j = 1; j <= a - c + 1; j++)
        {
            for (int k = 0; k < d; k++)
            {
                for (int l = 0; l < c; l++)
                {
                    f += farm[i + k][j + l];
                }
            }
            if (f > e)
            {
                e = f;
            }
            f = 0;
        }
    }

    printf("%d", e);

    return 0;
}