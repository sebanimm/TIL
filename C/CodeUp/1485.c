#include <stdio.h>

int main()
{
    int a, b, c[101][101] = {};
    scanf("%d %d", &a, &b);

    int i = 1, j = 1, d = a * b, e = 1, f = 1;

    for (int k = 1; k <= a * b; k++)
    {
        c[i][j] = d;
        d -= 1;
        if (j <= b && e == 1 && f == 1)
        {
            if (j + 1 <= b && c[i][j + 1] == 0)
            {
                j += 1;
            }
            else
            {
                i += 1;
                e = -1;
            }
        }
        else if (i <= a && e == -1 && f == 1)
        {
            if (i + 1 <= a && c[i + 1][j] == 0)
            {
                i += 1;
            }
            else
            {
                j -= 1;
                f = -1;
            }
        }
        else if (j >= 1 && e == -1 && f == -1)
        {
            if (j - 1 > 0 && c[i][j - 1] == 0)
            {
                j -= 1;
            }
            else
            {
                i -= 1;
                e = 1;
            }
        }
        else if (i >= 1 && f == -1 && e == 1)
        {
            if (i - 1 > 0 & c[i - 1][j] == 0)
            {
                i -= 1;
            }
            else
            {
                j += 1;
                f = 1;
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