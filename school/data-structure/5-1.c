#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 100
typedef int element; // int를 element로 재정의
typedef struct
{
  int top;
  element data[STACK_SIZE];
} Stack;

Stack s;
//문제) 스택 구조체 변수 정의
//문제) 전역변수로 스택 구조체 선언선언
void initStack()
{
  s.top = -1;
}
int Empty()
{
  if (s.top == -1)
  {
    return 1;
  }
  return 0;
}
int isFull()
{
  if (s.top == STACK_SIZE - 1)
  {
    return 1;
  }
  return 0;
}
void push(element item)
{
  if (isFull())
    return;
  s.top++;
  s.data[s.top] = item;
}
element pop()
{ //반환후 제거
  element temp;
  if (Empty())
    return 0;
  temp = s.data[s.top];
  s.top--;
  return temp;
}
element peek()
{ //반환만
  if (Empty())
    return 0;
  return s.data[s.top];
}
int main()
{
  s.top = -1;
  push(1);
  push(2);
  push(3);
  printf("%d\n", pop());
  printf("%d\n", peek());
  printf("%d\n", pop());
  return 0;
}