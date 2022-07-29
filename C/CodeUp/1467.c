#include <stdio.h>

int main()
{
    int a, b, c = 1,d[101][101] = {};
    scanf("%d %d", &a, &b);

    for (int i = b; i >= 1; i--)
    {
        for (int j = 1; j <= a; j++)
        {
            d[j][i] = c;
            c++;
        }
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}
