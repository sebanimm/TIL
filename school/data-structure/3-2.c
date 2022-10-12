
#include <stdio.h>

int main()
{ // i: 행첨자, j: 열첨자 사용

  int a[50][50], num = 0, le, re, te, be;

  int n, i, j;

  scanf("%d", &n);

  re = be = n; //오른, 아래 첨자 = n

  le = te = 1; //왼, 위 첨자 = 1

  while (num < n * n)
  { //(1)

    for (j = le; j <= re && num <= n * n; j++)
    {

      a[te][j] = ++num; //(2)
    }
    te++;

    for (i = te; i <= be && num <= n * n; i++)
    {
      a[i][re] = ++num; //(3)
    }
    re--;

    for (j = re; j >= le && num <= n * n; j--)
    {
      a[be][j] = ++num;
    }
    be--;

    for (i = be; i >= te && num <= n * n; i--)
    {
      a[i][le] = ++num;
    }

    le++;
  }

  //출력

  for (i = 1; i <= n; i++, puts(""))
  {

    for (j = 1; j <= n; j++)
    {
      printf("%d ", a[i][j]);
    }
  }

  return 0;
}