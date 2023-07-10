#include <stdio.h>

int main()
{
    int a, b, c[100], d;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &c[i]);
    }

    for (int i = 0; i < a; i += b)
    {
        d = c[i];
        for (int j = i; j < i + b; j++)
        {
            if (j < a)
            {
                if (d > c[j])
                {
                    d = c[j];
                }
            }
        }
        printf("%d ", d);
    }
    
    return 0;
}