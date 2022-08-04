#include <stdio.h>

int main()
{
    int a[12][11] = {}, b = 0;

    for (int i = 1; i <= 11; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 1; j <= 10; j++)
    {
        if (a[11][j] != 0)
        {
            b = 0;
            for (int i = 1; i <= 10; i++)
            {
                if (a[i][j] > 0)
                {
                    b = 1;
                }
                else if (a[i][j] < 0)
                {
                    b = 2;
                }
            }
            if (b == 1)
            {
                printf("%d crash\n", j);
            }
            else if (b == 2)
            {
                printf("%d fall\n", j);
            }
            else
            {
                printf("%d safe\n", j);
            }
        }
    }

    return 0;
}