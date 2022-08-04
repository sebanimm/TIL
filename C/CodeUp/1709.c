#include <stdio.h>

int main()
{
    int a[100], b, c;
    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (a[i] > a[j])
            {
                c = a[j];
                a[j] = a[i];
                a[i] = c;
            }
        }
    }

    for (int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
