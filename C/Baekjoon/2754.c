#include <stdio.h>

int main()
{
  char a[2];
  float b = 0.0;
  scanf("%s", &a);

  if (a[0] == 'A')
  {
    b += 4;
  }
  else if (a[0] == 'B')
  {
    b += 3;
  }
  else if (a[0] == 'C')
  {
    b += 2;
  }
  else if (a[0] == 'D')
  {
    b += 1;
  }

  if (a[1] == '+')
  {
    b += 0.3;
  }
  else if (a[1] == '-')
  {
    b -= 0.3;
  }

  printf("%.1f", b);

  return 0;
}