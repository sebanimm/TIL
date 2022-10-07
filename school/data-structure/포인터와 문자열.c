#include <stdio.h>

int myStrlen(const char *str)
{
  char *a;
  for (a = str; *a != '\0'; a++)
  {
    printf("%8X\n", a);
  }
  printf("s = %8X\n", a);
  printf("str = %8X\n", str);
  return a - str;
}

int main()
{
  char s[] = "hello";
  printf("%d\n", myStrlen(s));
  return 0;
}