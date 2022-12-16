#include <stdio.h>

int main()
{
  int a, b[100], c;
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &b[i]);
  }

  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a; j++)
    {
      if (b[i] < b[j])
      {
        c = b[i];
        b[i] = b[j];
        b[j] = c;
      }
    }
  }

  printf("%d", b[a - 1] - b[0]);

  return 0;
}
