#include <stdio.h>
#define MAX 300
typedef int element;
typedef struct
{
  element data[300];
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
    s->data[++(s->top)] = c;
  }
}

char pop(Stack *s)
{
  char Temp;
  if (isEmpty(s))
  {
    printf("EMPTY");
    return 0;
  }

  Temp = s->data[(s->top)--];
  return Temp;
}

int main()
{
  char expr[300];
  Stack s;

  initStack(&s);
  gets(expr);

  for (int i = 0; expr[i] != '\0'; i++)
  {
    if (expr[i] == ' ')
    {
      continue;
    }
    if (expr[i] == '*' || expr[i] == '+' || expr[i] == '-' || expr[i] == '/')
    {
      char a = pop(&s);
      char b = pop(&s);
      if (a >= 48)
      {
        a -= 48;
      }

      if (b >= 48)
      {
        b -= 48;
      }
      char c;
      if (expr[i] == '*')
      {
        c = b * a;
      }
      else if (expr[i] == '+')
      {
        c = b + a;
      }
      else if (expr[i] == '-')
      {
        c = b - a;
      }
      else
      {
        c = b / a;
      }
      printf("%d %d %d\n", a, b, c);
      push(&s, c);
    }
    else
    {
      push(&s, expr[i]);
    }
  }

  printf("%d", s.data[0]);
  return 0;
}
