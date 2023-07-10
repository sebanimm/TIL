#include <stdio.h>

int main()
{
    int a, b, count = 0, x[2][500001] = { 0, }, y[2][500001] = { 0, };
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        x[0][i] = b;
        y[0][b] = b;
    }

    for (int i = 0; i < 500001; i++)
    {
        if (y[0][i] != 0)
        {
            y[1][i] = count;
            count += 1;
        }
    }

    for (int i = 0; i < a; i++)
    {
        x[1][i] = y[1][x[0][i]];
        printf("%d ", x[1][i]);
    }

    return 0;
}