#include <stdio.h>

int main()
{
    int a[26][26] = {}, b[26][26] = {};

    for (int i = 1; i < 26; i++)
    {
        for (int j = 1; j < 26; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = 0;
        }
    }

    for (int i = 1; i < 26; i++)
    {
        for (int j = 1; j < 26; j++)
        {
            b[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];

            if (a[i][j] == 0)
            {
                if (b[i][j] == 3)
                {
                    b[i][j] = 1;
                }
                else
                {
                    b[i][j] = 0;
                }
            }
            else
            {
                if (b[i][j] >= 4 || b[i][j] <= 1)
                {
                    b[i][j] = 0;
                }
                else
                {
                    b[i][j] = 1;
                }
            }

            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}