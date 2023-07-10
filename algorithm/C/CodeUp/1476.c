#include <stdio.h>

int main()
{
    int a, b, c = 1, d = 1, e[101][101] = {};
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a + b; i++)
    {
        int f = i;

        if (f > a)
        {
            f = a;
            d += 1;
        }
        int g = d;
        while (f > 0)
        {
            if (i + 1 == f + g)
            {
                e[f][g] = c;
                c += 1;
            }

            f -= 1;
            g += 1;

            if (g > b)
            {
                break;
            }
        }
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
