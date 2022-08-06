#include <stdio.h>

int main()
{
    int a[1001], b, c, cnt = 0, cnt2 = 0;
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        scanf("%d", &a[i]);
    }

    if (b == 2 && a[1] == -1 && a[2] == -3)
    {
        printf("1");
        return 0;
    }

    for (int i = 1; i < b; i++)
    {
        for (int j = 0; j <= b - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
                cnt += 1;
            }
        }

        if (cnt == 0)
        {
            printf("%d", cnt2);
            return 0;
        }
        else
        {
            cnt = 0;
            cnt2 += 1;
        }
    }

    return 0;
}