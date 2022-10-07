#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char name[20];
  int *p;
} data;

int main()
{
  int n = 50;
  data d1;
  data *d2 = (data *)malloc(sizeof(data));
  // printf("구조체 포인터 크기 : %d\n", sizeof(d2));
  d1.p = &n;
  d2->p = &n;
  printf("%d\n", *d1.p + *d2->p);
  strcpy(d2->name, "bobby");
  printf("%s\n", (*d2).name); // d2->name과 동일. a
  printf("%d\n", *(*d2).p);
  free(d2);
  return 0;
}