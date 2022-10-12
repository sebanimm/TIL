#include <stdio.h>
int main()
{
  int input[100], a = 0, idx;

  for (int i = 0; i < 9; i++)
  {
    scanf("%d", &input[i]);
    if (input[i] > a)
    {
      a = input[i];
      idx = i;
    }
  }

  printf("%d\n%d", a, idx);

  return 0;
}