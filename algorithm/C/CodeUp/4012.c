#include <stdio.h>
int a[200], b[200], c[200], t = 1, s = 0;
int main()
{
  int n, max;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    c[i] = a[i];
  }

  while (1)
  {
    max = 0;

    for (int i = 0; i < n; i++)
    {
      if (max < a[i])
      {
        max = a[i];
      }
    }
    if (max == 0)
    {
      break;
    }

    s = 0;

    for (int i = 0; i < n; i++)
    {
      if (a[i] == max)
      {
        b[i] = t;
        s += 1;
        a[i] = 0;
      }
    }

    if (s == 0)
    {
      t += 1;
    }
    else
    {
      t += s;
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d %d\n", c[i], b[i]);
  }
}
