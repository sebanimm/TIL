#include <stdio.h>
#include <string.h>

char a[100];

int f(int c)
{
  int b = strlen(a);
  if (c >= b)
  {
    return 0;
  }

  return f(c + 1) + (a[c] - '0');
}

int main()
{
  scanf("%s", &a);
  printf("%d", f(0));

  return 0;
}