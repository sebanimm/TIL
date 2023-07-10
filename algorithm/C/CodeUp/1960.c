#include <stdio.h>
int i, a, DT[10000001] = {1, 2, 4, 7}; // 다이나믹 프로그래밍

int main()
{
  scanf("%d", &a);
  for (i = 4; i <= a; i++)
  {
    DT[i] = (DT[i - 1] + i) % 137;
  }
  printf("%d", DT[a]);
  return 0;
}