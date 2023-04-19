#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
  int n, a[101], b[10001], c[101];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &a[i], &b[i]);
    c[i] = a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++)
    printf("%d %d\n", a[i], b[c[i]]);
  return 0;
}
