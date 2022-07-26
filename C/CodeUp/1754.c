#include <stdio.h>

int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);
    int i, j, count1, count2;
    for (i = 0; a[i] != '\0'; i++){}
    for (j = 0; b[j] != '\0'; j++){}

    count1 = i;
    count2 = j;

    if (count1 > count2)
    {
        for (j = 0; b[j] != '\0'; j++)
        {
            printf("%c", b[j]);
        }
        printf(" ");

        for (i = 0; a[i] != '\0'; i++)
        {
            printf("%c", a[i]);
        }
    }
    else if (count1 < count2)
    {
        for (i = 0; a[i] != '\0'; i++)
        {
            printf("%c", a[i]);
        }
        printf(" ");
        for (j = 0; b[j] != '\0'; j++)
        {
            printf("%c", b[j]);
        }
    }
    else if (count1 == count2)
    {
        for (i = 0; a[i] != '\0'; i++)
        {
            if (a[i] > b[i])
            {
                for (j = 0; b[j] != '\0'; j++)
                {
                    printf("%c", b[j]);
                }
                printf(" ");
                for (i = 0; a[i] != '\0'; i++)
                {
                    printf("%c", a[i]);
                }
                break;
            }
            else if (a[i] < b[i])
            {
                for (i = 0; a[i] != '\0'; i++)
                {
                    printf("%c", a[i]);
                }
                printf(" ");
                for (j = 0; b[j] != '\0'; j++)
                {
                    printf("%c", b[j]);
                }
                break;
            }
        }
    }
    return 0;
}