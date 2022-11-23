#include <stdio.h>
int main()
{
  int a, b[64] = {}, c;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &b[i]);
  }

  scanf("%d", &c);

  for (int i = 0; b[i] != 0; i++)
  {
    if (b[i] == c)
    {
      printf("%d", i + 1);
      return 0;
    }
  }

  printf("실패");
  return 0;
}
