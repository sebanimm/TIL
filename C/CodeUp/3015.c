#include <stdio.h>
#include <stdlib.h>

struct student
{
  char name[12];
  int score;
};

int compare(const void *a, const void *b)
{
  struct student *x = (struct student *)a;
  struct student *y = (struct student *)b;

  return y->score - x->score;
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  struct student test[a];

  for (int i = 0; i < a; i++)
  {
    scanf("%s %d", test[i].name, &test[i].score);
  }

  qsort(test, a, sizeof(struct student), compare);

  for (int i = 0; i < b; i++)
  {
    printf("%s\n", test[i].name);
  }

  return 0;
}