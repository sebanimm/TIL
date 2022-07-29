#include <stdio.h>

int main()
{
    int a, b, c = 1, d = 1, e[101][101] = {};
    scanf("%d %d", &a, &b);

    int f = b, g = f, h = c;
    for (int k = 1; k <= a * b; k++)
    {
        if ((c >= 1 && c <= a) && (f >= 1 && f <= b))
        {
            e[c][f] = d;
            d += 1;
            c -= 1;
            f -= 1;

            if (!((c >= 1 && c <= a) && (f >= 1 && f <= b)))
            {
                h += 1;
                if (h > a)
                {
                    h = a;
                    g -= 1;
                }
                c = h;
                f = g;
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
