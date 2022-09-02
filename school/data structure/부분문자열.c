#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, i;
  char *str = (char *)malloc(sizeof(char) * 100); // char str[100]의 의미
  scanf("%s", str);
  scanf("%d %d", &a, &b);
  //출력부분 작성하시오.
  *(str + b) = '\0';         // 문자열 b + 1번에 null문자 넣음
  printf("%s", str + a - 1); // 문자열 a번부터 시작해서 null까지 부분 출력

  return 0;
}
