#include <stdio.h>
int main()
{
  int i, j, n = 4, k, temp, count = 0;
  int list[4] = {4, 5, 1, 2};
  for (i = 0; i < n - 1; i++)
  {
    k = i;
    for (j = i + 1; j < n; j++)
    {
      if (list[j] < list[k])
      {
        k = j;
        count += 1;
        printf("%d\n", count);
      }
    }
    temp = list[i];
    list[i] = list[k];
    list[k] = temp;
  }
  for (i = 0; i < n; i++)
  {
    printf("%d ", list[i]);
  }
  return 0;
}