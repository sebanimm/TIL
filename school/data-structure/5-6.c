#include <stdio.h>
#define MAX 100
typedef char element;
typedef struct Stack
{
  element str[MAX];
  int top;
} Stack;

void initStack(Stack *s)
{
  s->top = -1;
}

int isFull(Stack *s)
{
  return s->top == MAX;
}

int empty(Stack *s)
{
  return s->top == -1;
}

void push(Stack *s, char c)
{
  if (isFull(s))
  {
    printf("FULL");
  }
  else
  {
    s->str[++(s->top)] = c;
  }
}

char pop(Stack *s)
{
  char Temp;
  if (empty(s))
  {
    printf("EMPTY");
    return 0;
  }

  Temp = s->str[(s->top)--];
  return Temp;
}

int palindrome(char String[])
{
  Stack S;
  int i;
  //코드작성
}

int main(void)
{
  char str[MAX];
  scanf("%s", str);

  if (palindrome(str))
    printf("TRUE");
  else
    printf("FALSE");
  return 0;
}