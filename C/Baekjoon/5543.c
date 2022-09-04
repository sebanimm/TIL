#include <stdio.h>

int main()
{
  int a[3], b[2], c = 0;
  scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1]);

  if (a[0] < a[1] && a[0] < a[2])
  {
    c += a[0];
  }
  else if (a[1] < a[0] && a[1] < a[2])
  {
    c += a[1];
  }
  else
  {
    c += a[2];
  }

  c += b[0] < b[1] ? b[0] : b[1];

  printf("%d", c - 50);

  return 0;
}