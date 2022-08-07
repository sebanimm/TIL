#include <stdio.h>

long long int n;



long long int sqrt(long long int a)
{
	long long int i;
	for(i = 1; i * i < a; i++);
	
	if(i * i == a) {
		return i;
	} else {
		return i - 1;
	}
	
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}