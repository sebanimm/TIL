#include <stdio.h>
#include <string.h>

int main()
{
  char a[50], b[10] = {};
  int c = 0, count = 0, count3 = 0;
  gets(a);

  for (int i = 0; a[i] != '\0'; i++)
  {

    if (a[i] >= 48 && a[i] < 58)
    {
      if (a[i] == 48)
      {
        if (b[0] == '\0')
        {
          continue;
        }
      }
      b[count] = a[i];
      count += 1;
    }
  }

  int count2, j = 1;

  for (int i = 0; i < strlen(b); i++)
  {
    j *= 10;
  }

  for (int i = 1; i < j; i *= 10)
  {
    count2 = i;
  }
  
  for (int i = 0; b[i] != '\0'; i++)
  {
    printf("%c", b[i]);
    c += (b[i] - '0') * count2;
    count2 /= 10;
  }

  for (int i = 1; i <= c; i++)
  {
    if (c % i == 0)
    {
      count3 += 1;
    }
  }
  printf("\n%d", count3);

  return 0;
}
