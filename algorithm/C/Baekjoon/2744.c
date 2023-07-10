#include <stdio.h>
#include <string.h>

int main()
{
  char a[100];
  scanf("%s", &a);

  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] >= 65 && a[i] <= 90)
    {
      a[i] += 32;
    }
    else
    {
      a[i] -= 32;
    }
  }

  printf("%s", a);

  return 0;
}