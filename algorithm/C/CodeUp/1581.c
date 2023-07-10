#include <stdio.h>

void myswap(int* a, int* b) {
    int c = *b;
    if (*a > *b) {
        *b = *a;
        *a = c;
    }
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}