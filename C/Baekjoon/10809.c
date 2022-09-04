#include <stdio.h>
#include <string.h>

int main()
{
  int a[26];
  char b[100];

  for (int i = 0; i < 26; i++)
  {
    a[i] = -1;
  }

  scanf("%s", b);

  for (int i = 0; i < strlen(b); i++)
  {
    if (a[b[i] - 'a'] == -1)
    {
      a[b[i] - 'a'] = i;
    }
  }

  for (int i = 0; i < 26; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}