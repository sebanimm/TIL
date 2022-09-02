#include <stdio.h>
#include <stdlib.h>

int maxh(int *h, int n)
{
  int i;
  int max = h[0];
  // for문을 이용하여 최대값 검색
  for (i = 1; i < n; i++)
  {
    if (max < h[i])
    {
      max = h[i];
    }
  }
  return max;
}

int main()
{
  int n;
  scanf("%d", &n);

  int *h = (int *)malloc(sizeof(int) * n); //메모리 동적할당

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &h[i]);
  } // n개의 데이터 입력 저장

  printf("%d\n", maxh(h, n));

  free(h);
  return 0;
}