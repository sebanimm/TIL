#include <stdio.h>

int main()
{
    int a, b[101][101], x = 1, z = 1, y = 1, i = 1, j = 1;
    scanf("%d", &a);

    for (int k = 1; k <= a * a; k++)
    {
        b[i][j] = x;
        x += 1;
        if (j <= a && y == 1 && z == 1)
        {
            if (j + 1 <= a && b[i][j + 1] == 0)
            {
                j += 1;
            }
            else
            {
                i += 1;
                y = -1;
            }
        }
        else if (i <= a && y == -1 && z == 1)
        {
            if (i + 1 <= a && b[i + 1][j] == 0)
            {
                i += 1;
            }
            else
            {
                j -= 1;

                z = -1;
            }
        }
        else if (j >= 1 && y == -1 && z == -1)
        {
            if (j - 1 > 0 && b[i][j - 1] == 0)
            {
                j -= 1;
            }
            else
            {
                i -= 1;

                y = 1;
            }
        }
        else if (i >= 1 && z == -1 && y == 1)
        {
            if (i - 1 > 0 & b[i - 1][j] == 0)
            {

                i -= 1;
            }
            else
            {
                j++;
                z = 1;
            }
        }
    }

    for (int i = 1; i <= a; i++)
    {

        for (int j = 1; j <= a; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}