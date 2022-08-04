#include <stdio.h>

int main()
{
    int a, b = 1, c = 1, d[101][101], e;
    scanf("%d", &a);

    for (int i = a; i >= 1; i--)
    {
        if (c == 1)
        {
            e = a;
            for (int j = a - i + 1; j <= a; j++)
            {
                d[e--][j] = b++;
            }
            c = -1;
        }
        else
        {
            e = a - i + 1;
            for (int j = a; j >= a - i + 1; j--)
            {
                d[e++][j] = b++;
            }
            c = 1;
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