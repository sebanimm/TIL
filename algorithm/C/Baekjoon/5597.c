#include <stdio.h>

int main()
{
  int a[29], b[31] = {0};

  for (int i = 1; i <= 28; i++)
  {
    scanf("%d", &a[i]);
    b[a[i]] = a[i];
  }

  for (int i = 1; i <= 30; i++)
  {
    if (b[i] == 0)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}