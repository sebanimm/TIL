#include <stdio.h>

int main()
{
    int a, b, bomb[12][12] = {};

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            scanf("%d ", &bomb[i][j]);
        }
    }

    scanf("%d %d", &a, &b);

    if (bomb[a][b] == 1)
    {
        printf("-1");
    }
    else
    {
        printf("%d", bomb[a - 1][b - 1] + bomb[a - 1][b] + bomb[a - 1][b + 1] + bomb[a][b - 1] + bomb[a][b + 1] + bomb[a + 1][b - 1] + bomb[a + 1][b] + bomb[a + 1][b + 1]);
    }

    return 0;
}