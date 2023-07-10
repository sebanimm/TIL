#include <stdio.h>

int main()
{
    int a[50][50], b;
    scanf("%d", &b);
    int c = (b + 1) / 2, d = 0, i = 1, j = c;

    for (int k = 0; k < b * b; k++)
    {
        a[i][j] = d += 1;
        
        if (d % b == 0)
        {
            i += 1;
        }
        else
        {
            i -= 1;
            j += 1;
        }
        if (i < 1)
        {
            i = b;
        }
        if (j > b)
        {
            j = 1;
        }
    }

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}