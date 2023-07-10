#include <stdio.h>

int main()
{
    char a[1000];
    long long int sum = 0;

    scanf("%s", &a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        sum += a[i] - 48;
    }

    if (sum % 3 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
