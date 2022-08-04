#include <stdio.h>

int main()
{
    int a, b = 1, c[101][101], i = 1, j = 1, x = -1, y = 1;
    scanf("%d", &a);

    for (int k = 1; k <= a * a; k++)
    {
        c[i][j] = b;
        b += 1;
        if (j <= a && x == 1 && y == 1)
        {
            if (j + 1 <= a && c[i][j + 1] == 0)
            {
                j += 1;
            }
            else
            {
                i -= 1;
                y = -1;
            }
        }
        else if (i <= a && x == -1 && y == 1)
        {
            if (i + 1 <= a && c[i + 1][j] == 0)
            {
                i += 1;
            }
            else
            {
                j += 1;
                x = 1;
            }
        }
        else if (j >= 1 && x == -1 && y == -1)
        {
            if (j - 1 > 0 && c[i][j - 1] == 0)
            {
                j -= 1;
            }
            else
            {
                i += 1;
                y = 1;
            }
        }
        else if (i >= 1 && y == -1 && x == 1)
        {
            if (i - 1 > 0 & c[i - 1][j] == 0)
            {
                i -= 1;
            }
            else
            {
                j -= 1;
                x = -1;
            }
        }
    }

    for (int i = 1; i <= a; i++)
    {

        for (int j = 1; j <= a; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}