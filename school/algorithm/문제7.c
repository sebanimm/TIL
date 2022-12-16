#include <stdio.h>

int main()
{
  char a[100], b[100] = {};
  int count = 0;
  gets(a);

  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] == 32)
    {
      continue;
    }

    if (a[i] >= 65 && a[i] <= 90)
    {
      b[count] = a[i] + 32;
    }
    else
    {
      b[count] = a[i];
    }
    count += 1;
  }

  printf("%s", b);

  return 0;
}
