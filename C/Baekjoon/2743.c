#include <stdio.h>

int main()
{
  char a[100];
  int i = 0;
  scanf("%s", &a);

  while (a[i] != '\0')
  {
    i += 1;
  }

  printf("%d", i);

  return 0;
}