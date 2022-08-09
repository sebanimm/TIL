#include <stdio.h>

int main(void)
{
  int i, count, regNum[100], studNum[100], score[100], first = 0, second = 0, third = 0, save[3];
  scanf("%d", &count);

  for (i = 0; i < count; i++)
  {
    scanf("%d %d %d", &regNum[i], &studNum[i], &score[i]);
  }

  for (i = 0; i < count; i++)
  {
    if (first < score[i])
    {
      first = score[i];
      save[0] = i;
    }
  }

  printf("%d %d\n", regNum[save[0]], studNum[save[0]]);
  for (i = 0; i < count; i++)
  {
    if (second < score[i] && score[i] < first)
    {
      second = score[i];
      save[1] = i;
    }
  }

  printf("%d %d\n", regNum[save[1]], studNum[save[1]]);

  for (i = 0; i < count; i++)
  {
    if (!(regNum[save[0]] == regNum[save[1]] && regNum[i] == regNum[save[0]]))
    {
      if (third < score[i] && score[i] < first && score[i] < second)
      {
        third = score[i];
        save[2] = i;
      }
    }
  }

  printf("%d %d\n", regNum[save[2]], studNum[save[2]]);

  return 0;
}
