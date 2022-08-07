#include <stdio.h>

int n, d[110];


int f()
{
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i] > a)
		{
			a = d[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (d[i] == a)
		{
			return i + 1;
		}
	}
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}
