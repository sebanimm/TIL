#include <stdio.h>

int selfNumber(int x)
{
	for (int i = 1; i <= x; i++)
	{
		int y = i;
		int z = 0;
		while (y > 0)
		{
			z += y % 10;
			y /= 10;
		}
		if (z + i == x)
			return 0;
	}

	return x;
}

int main()
{
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++)
	{
		sum += selfNumber(i);
	}

	printf("%d", sum);

	return 0;
}
