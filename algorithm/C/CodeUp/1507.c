#include <stdio.h>

int main()
{
    int a[101][101] = {}, b, c, d, e, result = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d %d %d", &b, &c, &d, &e);
        for (int j = b; j < d; j++)
        {
            for (int k = c; k < e; k++)
            {
                a[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            if (a[i][j] == 1)
            {
                result += 1;
            }
        }
    }

    printf("%d", result);

    return 0;
}