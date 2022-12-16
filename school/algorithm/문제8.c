#include <stdio.h>

int main()
{
  char a[100], b[100];
  int c[52] = {0}, d, result = 0;
  scanf("%s %s", &a, &b);

  for (int i = 0; a[i] != '\0'; i++)
  {
    d = 65;
    if (a[i] >= 97)
    {
      d = 71;
    }
    c[a[i] - d] += 1;
  }

  for (int i = 0; b[i] != '\0'; i++)
  {
    d = 65;
    if (b[i] >= 97)
    {
      d = 71;
    }
    c[b[i] - d] -= 1;
  }

  for (int i = 0; i < 52; i++)
  {
    if (c[i] == 0)
    {
      continue;
    }
    else
    {
      result = 1;
      break;
    }
  }

  if (result == 0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}