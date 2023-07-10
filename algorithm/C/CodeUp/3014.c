#include <stdio.h>

int main()
{
	int a[100000] = {0}, b, c, d = 0;
	scanf("%d", &b);

	for (int i = 0; i < b; i++)
	{
		scanf("%d", &c);
		a[c] += 1;
		if (c > d)
		{
			d = c;
		}
	}

	for (int i = 0; i <= d; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			printf("%d ", i);
		}
	}

	return 0;
}