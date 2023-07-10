#include <stdio.h>

int main()
{
  int a, b, c, d, e, f, g;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  f = b / d;
  if (b % d != 0)
  {
    f += 1;
  }

  g = c / e;
  if (c % e != 0)
  {
    g += 1;
  }

  if (f >= g)
  {
    printf("%d", a - f);
  }
  else
  {
    printf("%d", a - g);
  }

  return 0;
}