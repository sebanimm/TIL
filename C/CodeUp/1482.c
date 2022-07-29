#include <stdio.h>

int main()
{
    int a, b, c[101][101] = {};
    scanf("%d %d", &a, &b);

    int i = a, j = 1, d = 1, e = i, f = j;
    for (int k = 1; k <= a * b; k++)
    {
        if ((i >= 1 && i <= a) && (j >= 1 && j <= b))
        {

            c[i][j] = d;
            d += 1;
            i -= 1;
            j -= 1;
            if (!((i >= 1 && i <= a) && (j >= 1 && j <= b)))
            {
                f += 1;
                if (f > b)
                {
                    f = b;
                    e -= 1;
                }
                i = e;
                j = f;
            }
        }
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
