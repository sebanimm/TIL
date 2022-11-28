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

int isEmpty(Stack *s)
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
  if (isEmpty(s))
  {
    return 0;
  }

  Temp = s->str[(s->top)--];
  return Temp;
}

void m(int a, int c, int n)
{
  printf("%d을 %c에서 %c로 옮깁니다\n", n, 'A' - 1 + a, 'A' - 1 + c);
}

int hanoi(int n, char a, char b, char c)
{
  Stack *s;
  initStack(s);
  while (1)
  {
    while (n > 1)
    {
      push(s, c);
      push(s, b);
      push(s, c);
      push(s, n);
      n--;
      push(s, c);
      c = b;
      b = pop(s);
    }
    m(a, c, n);
    if (!isEmpty(s))
    {
      n = pop(s);
      c = pop(s);
      b = pop(s);
      c = pop(s);
      m(a, c, n);
      n--;
      push(s, c);
      c = b;
      b = pop(s);
    }
    else
    {
      break;
    }
  }
}

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    hanoi(3, 1, 2, 3);
  }
  return 0;
}