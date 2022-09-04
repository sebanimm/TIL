#include <stdio.h>
#include <string.h>

int main()
{
  int a, c;
  char b[1000];
  scanf("%d", &a);

  for (int i = 0; i < a; i++)
  {
    scanf("%s", &b);
    c = strlen(b);
    printf("%c%c\n", b[0], b[c - 1]);
  }

  return 0;
}