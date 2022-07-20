#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1 || (j + i + 1) % b == 0)
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