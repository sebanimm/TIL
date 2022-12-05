#include <stdio.h>
#include <stdlib.h>

int items;                 // ��ǰ�� ���� ����
char itemName[][100] = {}; // ��ǰ �̸� ����
int cost[100], many[100], like[100];
int how;
int i, j;

void highCost()
{
  int i, j, k, temp;
  char tempC;
  for (i = 0; i < items - 1; i++)
  {
    k = i;
    for (j = i + 1; j < items; j++)
    {
      if (cost[j] > cost[k])
      {
        k = j;
      }
    }
    tempC = *itemName[i];
    *itemName[i] = *itemName[k];
    *itemName[k] = tempC;
    temp = cost[i];
    cost[i] = cost[k];
    cost[k] = temp;
    temp = many[i];
    many[i] = many[k];
    many[k] = many[i];
    temp = like[i];
    like[i] = like[k];
    like[k] = like[i];
  }
}

void lowCost()
{
  int i, j, k, temp;
  char tempC;
  for (i = 0; i < items - 1; i++)
  {
    k = i;
    for (j = i + 1; j < items; j++)
    {
      if (cost[j] < cost[k])
      {
        k = j;
      }
    }
    tempC = *itemName[i];
    *itemName[i] = *itemName[k];
    *itemName[k] = tempC;
    temp = cost[i];
    cost[i] = cost[k];
    cost[k] = temp;
    temp = many[i];
    many[i] = many[k];
    many[k] = many[i];
    temp = like[i];
    like[i] = like[k];
    like[k] = like[i];
  }
}

void highMany()
{
  int i, j, k, temp;
  char tempC;
  for (i = 0; i < items - 1; i++)
  {
    k = i;
    for (j = i + 1; j < items; j++)
    {
      if (many[j] > many[k])
      {
        k = j;
      }
    }
    tempC = *itemName[i];
    *itemName[i] = *itemName[k];
    *itemName[k] = tempC;
    temp = cost[i];
    cost[i] = cost[k];
    cost[k] = temp;
    temp = many[i];
    many[i] = many[k];
    many[k] = many[i];
    temp = like[i];
    like[i] = like[k];
    like[k] = like[i];
  }
}

void lowMany()
{
  int i, j, k, temp;
  char tempC;
  for (i = 0; i < items - 1; i++)
  {
    k = i;
    for (j = i + 1; j < items; j++)
    {
      if (many[j] < many[k])
      {
        k = j;
      }
    }
    tempC = *itemName[i];
    *itemName[i] = *itemName[k];
    *itemName[k] = tempC;
    temp = cost[i];
    cost[i] = cost[k];
    cost[k] = temp;
    temp = many[i];
    many[i] = many[k];
    many[k] = many[i];
    temp = like[i];
    like[i] = like[k];
    like[k] = like[i];
  }
}

void highLike()
{
  int i, j, k, temp;
  char tempC;
  for (i = 0; i < items - 1; i++)
  {
    k = i;
    for (j = i + 1; j < items; j++)
    {
      if (many[j] > many[k])
      {
        k = j;
      }
    }
    tempC = *itemName[i];
    *itemName[i] = *itemName[k];
    *itemName[k] = tempC;
    temp = cost[i];
    cost[i] = cost[k];
    cost[k] = temp;
    temp = many[i];
    many[i] = many[k];
    many[k] = many[i];
    temp = like[i];
    like[i] = like[k];
    like[k] = like[i];
  }
}

void lowLike()
{
  int i, j, k, temp;
  char tempC;
  for (i = 0; i < items - 1; i++)
  {
    k = i;
    for (j = i + 1; j < items; j++)
    {
      if (many[j] < many[k])
      {
        k = j;
      }
    }
    tempC = *itemName[i];
    *itemName[i] = *itemName[k];
    *itemName[k] = tempC;
    temp = cost[i];
    cost[i] = cost[k];
    cost[k] = temp;
    temp = many[i];
    many[i] = many[k];
    many[k] = many[i];
    temp = like[i];
    like[i] = like[k];
    like[k] = like[i];
  }
}

void output()
{
  for (i = 0; i < items; i++)
  {
    printf("%s %d %d %d\n", itemName[i], cost[i], many[i], like[i]);
  }
}

int main()
{
  printf("�ȳ��ϼ��� BSSM���� �Դϴ�\n�Է��� ��ǰ�� ���� �Է����ּ���.\n\n");
  scanf("%d", &items);

  printf("�Է��Ͻ� ��ǰ�� �� ��ŭ ��ǰ�� ������ ���⸦ �ؼ� ���ʴ�� �Է����ּ���(��ǰ �̸�, ��ǰ ����, ��ǰ �Ǹ� ��, ��ǰ ����)\n");
  for (i = 0; i < items; i++)
  {
    scanf("%s %d %d %d", itemName[i], &cost[i], &many[i], &like[i]);
    if (*itemName[i] == '\0' || cost[i] == '\0' || many[i] == '\0' || like[i] == '\0')
    {
      printf("������ ��ǰ ������ �ֽ��ϴ� �ٽ� �Է����ּ���.\n");
      i--;
    }
  }
  printf("��ǰ ���� �Է��� �Ϸ� �Ǿ����ϴ�\n");
restart2:
  printf("��� �����Ͻðڽ��ϱ�?\n");
  printf("1. ���� ���� �� 2. ���� ���� �� 3. ���� ��ǰ �Ǹ� �� 4. ���� ��ǰ �Ǹ� �� 5. ���� ��ǰ ���� �� 6. ���� ���� ��ǰ ��\n");
  scanf("%d", &how);
  if (how == 1)
  {
    highCost();
    printf("���� ���� �� ���� ��� �Դϴ�.\n");
    output();
  }
  else if (how == 2)
  {
    lowCost();
    printf("���� ���� �� ���� ��� �Դϴ�.\n");
    output();
  }
  else if (how == 3)
  {
    highMany();
    printf("���� ���� �� ���� ��� �Դϴ�.\n");
    output();
  }
  else if (how == 4)
  {
    lowMany();
    printf("���� ���� �� ���� ��� �Դϴ�.\n");
    output();
  }
  else if (how == 5)
  {
    highLike();
    printf("���� ���� �� ���� ��� �Դϴ�.\n");
    output();
  }
  else if (how == 6)
  {
    lowLike();
    printf("���� ���� �� ���� ��� �Դϴ�.\n");
    output();
  }
  else
  {
    printf("�߸��� ������ �ԷµǾ����ϴ�. �ٽ� �Է����ּ���.");
    goto restart2;
  }

  return 0;
}