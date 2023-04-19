#include <iostream>

using namespace std;

void plusOne(int &num1)
{
  num1 = num1 + 1;
}

void changeSign(int &num2)
{
  num2 = -num2;
}

int main()
{
  int n = 0;
  plusOne(n);
  cout << (n) << endl;
  changeSign(n);
  cout << (n);
  return 0;
}
