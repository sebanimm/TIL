#include <stdio.h>
#include <stdlib.h>

int items;                 // 상품의 개수 저장
char itemName[][100] = {}; // 상품 이름 저장
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
  printf("안녕하세요 BSSM마켓 입니다\n입력할 상품의 수를 입력해주세요.\n\n");
  scanf("%d", &items);

  printf("입력하신 상품의 수 만큼 상품의 정보를 띄어쓰기를 해서 차례대로 입력해주세요(상품 이름, 상품 가격, 상품 판매 수, 상품 평점)\n");
  for (i = 0; i < items; i++)
  {
    scanf("%s %d %d %d", itemName[i], &cost[i], &many[i], &like[i]);
    if (*itemName[i] == '\0' || cost[i] == '\0' || many[i] == '\0' || like[i] == '\0')
    {
      printf("누락된 상품 정보가 있습니다 다시 입력해주세요.\n");
      i--;
    }
  }
  printf("상품 정보 입력이 완료 되었습니다\n");
restart2:
  printf("어떻게 정렬하시겠습니까?\n");
  printf("1. 높은 가격 순 2. 낮은 가격 순 3. 높은 상품 판매 순 4. 낮은 상품 판매 순 5. 높은 상품 평점 순 6. 낮은 평점 상품 순\n");
  scanf("%d", &how);
  if (how == 1)
  {
    highCost();
    printf("높은 가격 순 정렬 결과 입니다.\n");
    output();
  }
  else if (how == 2)
  {
    lowCost();
    printf("높은 가격 순 정렬 결과 입니다.\n");
    output();
  }
  else if (how == 3)
  {
    highMany();
    printf("높은 가격 순 정렬 결과 입니다.\n");
    output();
  }
  else if (how == 4)
  {
    lowMany();
    printf("높은 가격 순 정렬 결과 입니다.\n");
    output();
  }
  else if (how == 5)
  {
    highLike();
    printf("높은 가격 순 정렬 결과 입니다.\n");
    output();
  }
  else if (how == 6)
  {
    lowLike();
    printf("높은 가격 순 정렬 결과 입니다.\n");
    output();
  }
  else
  {
    printf("잘못된 정보가 입력되었습니다. 다시 입력해주세요.");
    goto restart2;
  }

  return 0;
}