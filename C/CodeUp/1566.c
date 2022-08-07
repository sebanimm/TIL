#include <stdio.h>

int a, n;
long long int pow(int a, int b) {
    long long int result = 1;
    if (a == 1) {
        return 1;
    }
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}