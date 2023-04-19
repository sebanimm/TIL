#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
  int temp = ref1;
  ref1 = ref2;
  ref2 = temp;
}

void SwapByRef1(int *ref1, int *ref2)
{
  int temp = *ref1;
  *ref1 = *ref2;
  *ref2 = temp;
}

void SwapByVal(int ref1, int ref2)
{
  int temp = ref1;
  ref1 = ref2;
  ref2 = temp;
}
int main(void)
{
  int val1 = 10;
  int val2 = 20;

  SwapByVal(val1, val2);
  cout << val1 << ' ' << val2 << endl;

  SwapByRef1(&val1, &val2);
  cout << val1 << ' ' << val2 << endl;

  SwapByRef2(val1, val2);
  cout << val1 << ' ' << val2 << endl;
  return 0;
}
// 문제2 : 위 예제 코드 main 함수에서 SwapByRef2(23,45); 의 형태로 호출하면 컴파일 에러가 발생하는 이유에 대해 서술하시오. 
// 이유 : 함수 SwapByRef2에서 매개변수로 참조자를 쓰려면 인자로 주소가 있는 변수를 받아야 하는데 23, 45는 값이기 때문에 주소가 없어서 오류가 난다.