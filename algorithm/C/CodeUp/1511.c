#include <stdio.h>

int main()
{
    int a[101][101] = {}, b, c = 0, sum = 0;
    scanf("%d", &b);
    
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            c += 1;
            a[i][j] = c;
        }
    }

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == 1 || i == b || j == 1 || j == b)
            {
                sum += a[i][j];
            }
        }
    }

    printf("%d", sum);

    return 0;
}