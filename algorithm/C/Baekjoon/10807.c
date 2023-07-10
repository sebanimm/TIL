#include <stdio.h>
int main()
{
  int a, b[1000], c, count = 0;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &b[i]);
  }

  scanf("%d", &c);

  for (int i = 0; i < a; i++)
  {
    if (b[i] == c)
    {
      count += 1;
    }
  }

  printf("%d", count);

  return 0;
}