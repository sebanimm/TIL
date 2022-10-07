#include <stdio.h>
int main()
{
  int a[101][101] = {0};
  int i, j, num, n, m;
  scanf("%d", &n);
  num = 1;
  // 1. 배열에 값을 저장하는 코드 작성
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < n; j++)
      {
        a[i][j] = num;
        num += 1;
      }
    }
    else
    {

      for (int j = n - 1; j >= 0; j--)
      {
        a[i][j] = num;
        num += 1;
      }
    }
  }
  // 2. 배열결과를 출력하는 코드 작성
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}