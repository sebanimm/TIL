#include <stdio.h>
#include <stdlib.h> // rand() 함수 쓰려고 선언
#include <time.h>   // rand 함수에 time(NULL) 해야 제대로 작동하더라구요 그래서 선언

int n[7];
int count = 0, bonus = 0;
int lotto[7] = {0};

void chooseLottoNumber(int k)
{
  if (k == 7)
  {
    for (int i = 0; i < 6; i++)
    {
      for (int j = 0; j < 6; j++)
      {
        if (lotto[i] == n[j])
        {
          count += 1;
          continue;
        }
      }
    }

    if (n[6] == lotto[6])
    {
      bonus += 1;
    }

    printf("\n맞은 로또 번호의 갯수 : %d번\n", count);
    printf("맞은 보너스 번호의 갯수 : %d번\n", bonus);

    if (count == 6)
    {
      printf("\n1등이 당첨되었습니다.\n");
    }
    else if (count == 5)
    {
      if (bonus == 1)
      {
        printf("\n2등이 당첨되었습니다.\n");
      }
      else
      {
        printf("\n3등이 당첨되었습니다.\n");
      }
    }
    else if (count == 4)
    {
      printf("\n4등이 당첨되었습니다.\n");
    }
    else if (count == 3)
    {
      printf("\n5등이 당첨되었습니다.\n");
    }
    else
    {
      printf("\n꽝입니다. 다음 기회를 노려보세요.\n");
    }

    return;
  }

  while (1)
  {
    int count2 = 0;
    for (int i = 0; i < 7; i++)
    {
      for (int j = 0; j < 7; j++)
      {
      }
    }
  }

  return chooseLottoNumber(k + 1);
}

int main()
{
  printf("로또 번호를 입력해보세요 : ");
  scanf("%d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
  printf("보너스 번호 : ");
  scanf("%d", &n[6]);
  srand(time(NULL));
  printf("추첨된 번호 : ");

  for (int i = 0; i < 7; i++)
  {
    int random = rand() % 45 + 1;
    lotto[i] = random;
  }

  chooseLottoNumber(0);
  return 0;
}