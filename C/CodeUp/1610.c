#include <stdio.h>
#include <malloc.h>

char *a;

char *mysubstr(char *x, int y, int z)
{
	a = (char *)malloc(z + 1);

	for (int i = 0; i < z; i++)
	{
		a[i] = x[i + y];
	}
	a[y + z] = '\0';

	return a;
}

int main()
{
	char x[100];
	int y, z;

	scanf("%s", x);
	scanf("%d %d", &y, &z);

	printf("%s", mysubstr(x, y, z));
	free(a);
	return 0;
}