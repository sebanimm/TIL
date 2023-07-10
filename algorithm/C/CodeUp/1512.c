#include <stdio.h>

int main()
{
    int a, b, c, d[101][101];
    scanf("%d", &a);
    scanf("%d %d", &b, &c);

    d[b][c] = 1;

    int value = d[b][c];

    for (int i = b - 1; i >= 1; i--)
    {
        d[i][c] = value += 1;
    }

    value = d[b][c];
    for (int i = b + 1; i <= a; i++)
    {
        d[i][c] = value += 1;
    }

    for (int i = 1; i <= a; i++)
    {
        value = d[i][c];
        for (int j = c - 1; j >= 1; j--)
        {
            d[i][j] = value += 1;
        }

        value = d[i][c];
        for (int j = c + 1; j <= a; j++)
        {
            d[i][j] = value += 1;
        }
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}