#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int half = (a + 1) / 2;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i == j || (a + 1 - i) == j || j == half || j == 1 || j == a) //대각선, 중앙선, 테두리
            {
                if (i != 1 || i != a || i != half)
                {
                    printf("*");
                }
            }
            else if (i == 1)
            {
                printf("*");
            }
            else if (i == half)
            {
                printf("*");
            }
            else if (i == a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}