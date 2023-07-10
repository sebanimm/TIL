#include <stdio.h>

int n, a, b, d[1010];
int maxi(int x,int y) {
	int c = x, e = d[x];
	
	for(int i = x; i <= y; i++)
	{
		if(d[i] > e)
		{
			c = i;
			e = d[i];
		}
	}
	
	return c;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}