#include <stdio.h>

int main()
{
    int a, score[50], ranking[50] = {0,};
    char student[50][50];
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%s %d", &student[i], &score[i]);
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (score[i] < score[j])
            {
                ranking[i] += 1;
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        if (ranking[i] == 2)
        {
            printf("%s", student[i]);
        }
    }

    return 0;
}