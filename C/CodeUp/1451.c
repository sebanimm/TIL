#include <stdio.h>

int main()
{
    int a[10001], b, c;
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (a[j] < a[j + 1])
            {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;

            }
        }
    }

    for (int i = b; i >= 1; i--)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
