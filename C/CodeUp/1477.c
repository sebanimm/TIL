#include <stdio.h>

int main()
{
    int a, b, c = 1, d = 1, e[101][101] = {};
    scanf("%d %d", &a, &b);

    for (int j = 1; j <= a + b; j++)
    {

        int f = j;

        if (f > b)
        {
            f = b;
            c += 1;
        }

        int g = c;
        if (g + f > a + b)
        {
            break;
        }
        while (f > 0)
        {
            if (j + 1 == g + f)
            {
                e[g][f] = d;
                d += 1;
            }

            g += 1;
            f -= 1;

            if (g > a)
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
