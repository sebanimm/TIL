#include <stdio.h>

void mystrcpy(char str2[], char str1[])
{
  int i = 0;
  while (*(str1 + 1) != '\0') // str1[i] !='\0'
  {
    *(str2 + i) = *(str1 + i); // str2[i] = str1[i] ;
    i++;
  }
  *(str2 + i) = '\0'; //마지막 문자에 '\0' 입력
}

void mystrcpy2(char *s3, char *s1)
{
  while (*s1 != '\0') // s1[i] !='\0'
  {
    *s3 = *s1;
    s1 += 1;
    s3 += 1;
  }
  *s3 = '\0';
}

int main()
{
  char str1[257], str2[257], str3[257];
  fgets(str1, 257, stdin);
  mystrcpy(str2, str1);
  puts(str2);
  mystrcpy2(str3, str1);
  puts(str3);
  return 0;
}
