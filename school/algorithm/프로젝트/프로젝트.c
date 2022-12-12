#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef char *element;
typedef struct
{
  element type[50];
  int index;
  struct BookInfo *next;
} BookType;

typedef struct
{
  char bookName[50];
  char bookType[50];
  float rate;
  int price;
  int index;
  struct BookInfo *next;
} BookInfo;
char book_name[][100] = {};
int book_price[100];
float book_rate[100];
char book_type[][100] = {};
int lastIndex;
int firstIndex;

// 연결리스트
void output()
{
  int i, help;
  printf("============================= 현재 책 정보 =============================\n");
  for (i = 0; i < lastIndex; i++)
  {
    printf("\n[%d] 책 이름 : %s, 책 가격 : %d, 책 평점 : %.1f, 책 종류 : %s", i, book_name[i], book_price[i], book_rate[i], book_type[i]);
  }
  printf("\n\n========================================================================\n\n");
  printf("1 입력시 메뉴로 이동\n");
  while (1)
  {
    scanf("%d", &help);
    if (help == 1)
      break;
  }
  system("cls");
}
void highCost()
{
  int i, j, temp;
  char tempC;
  float tempF;
  for (i = firstIndex; i < lastIndex - 1; i++)
  {
    int k = i;
    for (j = i + 1; j < lastIndex; j++)
    {
      if (book_price[j] > book_price[k])
      {
        k = j;
      }
      tempC = *book_name[i];
      *book_name[i] = *book_name[k];
      *book_name[k] = tempC;
      temp = book_price[i];
      book_price[i] = book_price[k];
      book_price[k] = temp;
      tempF = book_rate[i];
      book_rate[i] = book_rate[k];
      book_rate[k] = tempF;
      tempC = *book_type[i];
      *book_type[i] = *book_type[k];
      *book_type[k] = tempC;
    }
  }
}
void lowCost()
{
  int i, j, temp;
  char tempC;
  float tempF;
  for (i = firstIndex; i < lastIndex - 1; i++)
  {
    int k = i;
    for (j = i + 1; j < lastIndex; j++)
    {
      if (book_price[j] < book_price[k])
      {
        k = j;
      }
      tempC = *book_name[i];
      *book_name[i] = *book_name[k];
      *book_name[k] = tempC;
      temp = book_price[i];
      book_price[i] = book_price[k];
      book_price[k] = temp;
      tempF = book_rate[i];
      book_rate[i] = book_rate[k];
      book_rate[k] = tempF;
      tempC = *book_type[i];
      *book_type[i] = *book_type[k];
      *book_type[k] = tempC;
    }
  }
}
void highRate()
{
  int i, j, temp;
  char tempC;
  float tempF;
  for (i = firstIndex; i < lastIndex - 1; i++)
  {
    int k = i;
    for (j = i + 1; j < lastIndex; j++)
    {
      if (book_rate[j] > book_rate[k])
      {
        k = j;
      }
      tempC = *book_name[i];
      *book_name[i] = *book_name[k];
      *book_name[k] = tempC;
      temp = book_price[i];
      book_price[i] = book_price[k];
      book_price[k] = temp;
      tempF = book_rate[i];
      book_rate[i] = book_rate[k];
      book_rate[k] = tempF;
      tempC = *book_type[i];
      *book_type[i] = *book_type[k];
      *book_type[k] = tempC;
    }
  }
}
void lowRate()
{
  int i, j, temp;
  char tempC;
  float tempF;
  for (i = firstIndex; i < lastIndex - 1; i++)
  {
    int k = i;
    for (j = i + 1; j < lastIndex; j++)
    {
      if (book_rate[j] < book_rate[k])
      {
        k = j;
      }
      tempC = *book_name[i];
      *book_name[i] = *book_name[k];
      *book_name[k] = tempC;
      temp = book_price[i];
      book_price[i] = book_price[k];
      book_price[k] = temp;
      tempF = book_rate[i];
      book_rate[i] = book_rate[k];
      book_rate[k] = tempF;
      tempC = *book_type[i];
      *book_type[i] = *book_type[k];
      *book_type[k] = tempC;
    }
  }
}
int maxIndex;
void printBookTypeList(BookType *head)
{
  int i = 1;
  printf("======== 현재 도서 종류 ========\n");
  while (head != NULL)
  {
    head->index = i++;
    printf("\n[%d] %s", head->index, head->type);
    head = head->next;
    maxIndex = i;
  }
  printf("\n\n================================\n\n");
}
void printBookInfoList(BookInfo *head)
{
  int i = 1;
  printf("============================= 현재 책 정보 =============================\n");
  while (head != NULL)
  {
    head->index = i++;
    printf("\n[%d] %-16s종류 : %12s, 가격 : %6d원, 평점 : %.1f점", head->index, head->bookName, head->bookType, head->price, head->rate);
    head = head->next;
  }
  printf("\n\n========================================================================\n\n");
}

BookType *insertFirstBT(BookType *head, char *name)
{
  BookType *newBookType = (BookType *)malloc(sizeof(BookType));
  strcpy(newBookType->type, name);
  newBookType->next = head;
  head = newBookType;
  return head;
}

BookInfo *insertFirst(BookInfo *head, char *name, int price, float rate, char *bookType)
{
  BookInfo *newBookInfo = (BookInfo *)malloc(sizeof(BookInfo));
  strcpy(newBookInfo->bookName, name);
  strcpy(book_name[lastIndex], name);
  strcpy(newBookInfo->bookType, bookType);
  strcpy(book_type[lastIndex], bookType);
  newBookInfo->price = price;
  book_price[lastIndex] = price;
  newBookInfo->rate = rate;
  book_rate[lastIndex] = rate;
  newBookInfo->next = head;
  lastIndex += 1;
  head = newBookInfo;
  return head;
}

BookType *reverseBT(BookType *head)
{
  BookType *p, *q, *r;
  p = head;
  q = NULL;
  while (p != NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  return q;
}

BookInfo *reverse(BookInfo *head)
{
  BookInfo *p, *q, *r;
  p = head;
  q = NULL;
  while (p != NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  return q;
}

element temp[50];

BookType *deleteFirstBT(BookType *head)
{
  BookType *removed;
  if (head == NULL)
    return NULL;
  removed = head;
  strcpy(temp, removed->type);
  head = removed->next;
  free(removed);
  return head;
}

BookInfo *deleteFirst(BookInfo *head)
{
  firstIndex += 1;
  BookInfo *removed;
  if (head == NULL)
    return NULL;
  removed = head;
  strcpy(temp, removed->bookName);
  head = removed->next;
  free(removed);
  return head;
}

int main()
{
  BookType *bt = NULL;
  char bookType[50];
  int select1;
  element data;
START:
  while (1)
  {
    printf("안녕하세요 예밀24 입니다. 무엇을 도와드릴까요?\n\n1 : 추가\n2 : 삭제\n3 : 책 정보 페이지로 이동\n4 : 프로그램 종료\n\n");
    scanf("%d", &select1);
    system("cls");
    if (select1 == 1)
    {
      printf("추가할 도서 종류를 입력해주세요.\n\n");
      scanf(" %[^\n]", bookType);
      bt = insertFirstBT(bt, bookType);
      printf("\n%s(이)가 추가되었습니다.", bookType);
      Sleep(2000);
      system("cls");
      bt = reverseBT(bt);
    }
    else if (select1 == 2)
    {
      if (bt != NULL)
      {
        bt = deleteFirstBT(bt);
        printf("%s(이)가 삭제되었습니다.", &temp);
      }
      else
      {
        printf("삭제할 도서 종류가 없습니다.");
      }
      Sleep(2000);
      system("cls");
    }
    else if (select1 == 3)
    {
      for (int i = 3; i >= 1; i--)
      {
        system("cls");
        printf("%d초 뒤 책 정보 페이지로 이동합니다.", i);
        Sleep(1000);
      }
      system("cls");
      break;
    }
    else if (select1 == 4)
    {
      system("cls");
      printf("프로그램이 종료됩니다.\n\n");
      exit(0);
    }
    else
    {
      printf("\n다시 입력해주세요.\n");
    }
    printBookTypeList(bt);
  }
  BookInfo *bi = NULL;
  BookInfo *p;
  char bookName[50];
  int bookPrice;
  float bookRate;
  int bookIndex;
  char bookType2[50];
  int select;
  int check;
  while (1)
  {
    printf("안녕하세요 예밀24 입니다. 무엇을 도와드릴까요?\n\n1 : 추가\n2 : 삭제\n3 : 도서 종류 페이지로 이동\n4 : 책 정보 정렬해서 출력\n5 : 프로그램 종료\n\n");
    scanf("%d", &select);
    system("cls");
    if (select == 1)
    {
      printf("책의 이름을 입력해주세요. ( 띄워쓰기 없이 입력해주세요 ) \n\n");
      scanf("%s", bookName);
      printf("\n책의 가격을 입력해주세요. \n\n");
      scanf("%d", &bookPrice);
      printf("\n책의 평점을 입력해주세요.(0.0 ~ 5.0) \n\n");
      scanf("%f", &bookRate);
      printf("\n책의 종류를 입력해주세요. \n\n");
      printBookTypeList(bt);
      scanf("%s", &bookType2);
      BookType *temp = bt;
      int i;
      element tempType = temp->type;
      for (i = 0; i < maxIndex; i++)
      {
        if (strcmp(bookType2, tempType) != 0)
        {
          if (i == maxIndex - 1)
          {
            printf("\n해당하는 책의 종류가 존재하지 않습니다.\n");
            break;
          }
          temp = temp->next;
          continue;
        }
        bi = insertFirst(bi, bookName, bookPrice, bookRate, bookType2);
        printf("\n%s(이)가 추가되었습니다.", bookName);
        bi = reverse(bi);
        break;
      }
      Sleep(2000);
      system("cls");
    }
    else if (select == 2)
    {
      if (bi != NULL)
      {
        bi = deleteFirst(bi);
        printf("%s(이)가 삭제되었습니다.", &temp);
      }
      else
      {
        printf("삭제할 책 정보가 없습니다.");
      }
      Sleep(2000);
      system("cls");
    }
    else if (select == 3)
    {
      for (int i = 3; i >= 1; i--)
      {
        system("cls");
        printf("%d초 뒤 도서 종류 페이지로 이동합니다.", i);
        Sleep(1000);
      }
      system("cls");
      goto START;
      break;
    }
    else if (select == 4)
    {
      while (1)
      {
        system("cls");
        printf("어떻게 정렬하시겠습니까?\n\n");
        printf("1 : 높은 가격 순\n2 : 낮은 가격 순\n3 : 높은 평점 순\n4 : 낮은 평점 순\n");
        scanf("%d", &check);
        if (check == 1)
        {
          system("cls");
          printf("정렬이 성공적으로 이루어졌습니다.\n\n");
          highCost();
          output();
          break;
        }
        else if (check == 2)
        {
          system("cls");
          printf("정렬이 성공적으로 이루어졌습니다.\n\n");
          lowCost();
          output();
          break;
        }
        else if (check == 3)
        {
          system("cls");
          printf("정렬이 성공적으로 이루어졌습니다.\n\n");
          highRate();
          output();
          break;
        }
        else if (check == 4)
        {
          system("cls");
          printf("정렬이 성공적으로 이루어졌습니다.\n\n");
          lowRate();
          output();
          break;
        }
        else
        {
          printf("잘못된 정보가 입력되었습니다. 다시 입력해주세요.");
          system("cls");
        }
      }
    }
    else if (select == 5)
    {
      system("cls");
      printf("프로그램이 종료됩니다.\n\n");
      exit(0);
    }
    else
    {
      printf("다시 입력해주세요.\n");
    }
    printBookInfoList(bi);
  }
  return 0;
}