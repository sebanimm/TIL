#include <stdio.h>

int main(void)
{
  int a, b, c[100], d[100], sum = 0;
  scanf("%d", &a);
  scanf("%d", &b);

  for (int i = 0; i < b; i++)
  {
    scanf("%d %d", &c[i], &d[i]);
  }

  for (int i = 0; i < b; i++)
  {
    sum += c[i] * d[i];
  }

  if (a == sum)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }

  return 0;
}