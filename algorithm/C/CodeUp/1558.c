#include <stdio.h>

long long int n;

long long int f(long long int a)
{
	int b[100], len;
	long long int c = 0;
	for (len = 0; a > 0; len++)
	{
		b[len] = a % 10;
		a /= 10;
	}

	for (int i = 0; i < len; i++)
	{
		long long int d = 1;
		for (int j = 1; j < len - i; j++)
		{
			d *= 10;
		}
		c += b[i] * d;
	}

	return c;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}