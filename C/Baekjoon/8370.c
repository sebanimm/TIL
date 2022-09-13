#include <stdio.h>
#include <stdlib.h> // rand() �Լ� ������ ����
#include <time.h>   // rand �Լ��� time(NULL) �ؾ� ����� �۵��ϴ��󱸿� �׷��� ����

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

    printf("\n���� �ζ� ��ȣ�� ���� : %d��\n", count);
    printf("���� ���ʽ� ��ȣ�� ���� : %d��\n", bonus);

    if (count == 6)
    {
      printf("\n1���� ��÷�Ǿ����ϴ�.\n");
    }
    else if (count == 5)
    {
      if (bonus == 1)
      {
        printf("\n2���� ��÷�Ǿ����ϴ�.\n");
      }
      else
      {
        printf("\n3���� ��÷�Ǿ����ϴ�.\n");
      }
    }
    else if (count == 4)
    {
      printf("\n4���� ��÷�Ǿ����ϴ�.\n");
    }
    else if (count == 3)
    {
      printf("\n5���� ��÷�Ǿ����ϴ�.\n");
    }
    else
    {
      printf("\n���Դϴ�. ���� ��ȸ�� ���������.\n");
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
  printf("�ζ� ��ȣ�� �Է��غ����� : ");
  scanf("%d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
  printf("���ʽ� ��ȣ : ");
  scanf("%d", &n[6]);
  srand(time(NULL));
  printf("��÷�� ��ȣ : ");

  for (int i = 0; i < 7; i++)
  {
    int random = rand() % 45 + 1;
    lotto[i] = random;
  }

  chooseLottoNumber(0);
  return 0;
}