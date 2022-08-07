#include <stdio.h>

int hab(int x) {
    int a = x, sum = 0;
	while (a) {
	    sum += (a % 10);
	    a /= 10;
	}
	
	int b = sum;
	sum = 0;
	
	while (b) {
	    sum += b % 10;
	    b /= 10;
	}
	
	int c = sum;
	sum = 0;
	
	while (c) {
	    sum += c % 10;
	    c /= 10;
	}
	
	return sum;
}
int main() 
{
	int a;
	scanf("%d", &a);
	printf("%d", hab(a));
	return 0;	
}