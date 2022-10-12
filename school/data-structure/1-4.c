#include <stdio.h>
#include <string.h>

int main()
{
  char a[80];
  int b, count = 0, score[100];
  scanf("%d", &b);

  for (int i = 0; i < b; i++)
  {
    scanf("%s", &a);

    for (int j = 0; j < strlen(a); j++)
    {
      if (a[j] == 'O')
      {
        count += 1;
      }
      else if (a[j] == 'X')
      {
        count = 0;
      }

      score[i] += count;
    }
    printf("%d\n", score[i]);
  }

  return 0;
}
