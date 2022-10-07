#include <stdio.h>
#include <string.h>

int main()
{
  char s[1000001];
  int a[200] = {0};
  int t = 0;
  scanf("%s", s);

  for (int i = 0; s[i] != '\0'; i++)
  {
    t = s[i] - 0;
    a[t] = a[t] + 1;
  }

  for (int i = 65; i <= 90; i++)
  {
    if (a[i] != 0)
    {
      printf("%c : %d\n", i, a[i]);
    }
  }

  return 0;
}