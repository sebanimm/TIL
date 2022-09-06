#include <stdio.h>
int main()
{
  int a, b[100], c, count = 0;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &b[i]);
  }

  c = b[a - 1];

  for (int i = a; i > 1; i--)
  {
    if (b[i] > c)
    {
      c = b[i];
      count += 1;
    }
  }

  printf("%d", count);

  return 0;
}
