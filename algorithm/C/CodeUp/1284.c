#include <stdio.h>
int main()
{
    int i, j, k, a, b;
    scanf("%d", &a);
    for (i = 2; i <= a / 2; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                if (i == j)
                {
                    if (a % i == 0)
                    {
                        b = a / i;
                        for (k = 2; k <= b; k++)
                        {
                            if (b % k == 0)
                            {
                                if (b == k)
                                {
                                    printf("%d %d", i, b);
                                    return 0;
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
    printf("wrong number");
    return 0;
}