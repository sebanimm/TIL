#include <stdio.h>

int main()
{
    int x[22][22] = {}, y[9][2] = {};
    int n;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            scanf("%d ", &x[i][j]);
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (x[i][j] > 0)
            {
                int trap = x[i][j];
                int w = 0;
                int a = 0;
                int s = 0;
                int d = 0;
                for (int k = 1; k <= trap; k++)
                {
                    x[i][j] = -2;
                    if (x[i + k][j] != -1 && s == 0 && x[i + k][j] <= 0)
                    {
                        x[i + k][j] = -2;
                    }
                    else if (x[i + k][j] == -1)
                    {
                        s = 1;
                    }

                    if (x[i - k][j] != -1 && w == 0 && x[i - k][j] <= 0)
                    {
                        x[i - k][j] = -2;
                    }
                    else if (x[i - k][j] == -1)
                    {
                        w = 1;
                    }

                    if (x[i][j + k] != -1 && a == 0 && x[i][j + k] <= 0)
                    {
                        x[i][j + k] = -2;
                    }
                    else if (x[i][j + k] == -1)
                    {
                        a = 1;
                    }

                    if (x[i][j - k] != -1 && d == 0 && x[i][j - k] <= 0)
                    {
                        x[i][j - k] = -2;
                    }
                    else if (x[i][j - k] == -1)
                    {
                        d = 1;
                    }
                }
            }
        }
    }

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &y[i][0], &y[i][1]);
        if (x[y[i][0]][y[i][1]] == 0)
        {
            x[y[i][0]][y[i][1]] = i;
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    printf("Character Information\n");

    for (int i = 1; i <= n; i++)
    {
        int one, two;
        one = y[i][0];
        two = y[i][1];
        if (x[one][two] == i)
        {
            printf("player %d survive\n", i);
        }
        else
        {
            printf("player %d dead\n", i);
        }
    }

    return 0;
}