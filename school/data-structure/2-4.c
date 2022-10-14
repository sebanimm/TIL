#include <stdio.h>
#include <string.h>

int main()
{
  char s[1000001];
  int count[26] = {0};
  scanf("%s", &s);
  int len = strlen(s);

  for (int i = 0; i < len; i++)
  {
    if (s[i] >= 97 && s[i] <= 122)
    {
      count[s[i] - 97] += 1;
    }
    else
    {
      count[s[i] - 65] += 1;
    }
  }

  int a = 0, b = 0, c = 0;

  for (int i = 0; i < 26; i++)
  {
    if (a < count[i])
    {
      a = count[i];
      c = i;
    }
  }

  for (int i = 0; i < 26; i++)
  {
    if (a == count[i])
    {
      b += 1;
    }
  }

  if (b > 1)
  {
    printf("?");
  }
  else
  {
    printf("%c", c + 'A');
  }

  return 0;
}