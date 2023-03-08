// printf와 scanf를 대신하는 입출력 방식
// 문제 1번
#include <iostream>

int main()
{
  int n[5];
  int sum = 0;

  for (int i = 0; i < 5; i++)
  {
    std::cin >> n[i];
    sum += n[i];
  }

  std::cout << sum << std::endl;
  return 0;
}

// 문제 2번
#include <iostream>

int main()
{
  char name[10];
  char number[12];
  std::cin >> name;
  std::cin >> number;
  std::cout << name << std::endl;
  std::cout << number << std::endl;
  return 0;
}

// 문제 3번
#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  for (int i = 1; i < 10; i++)
  {
    std::cout << n << " X " << i << " = " << n * i << std::endl;
  }
  return 0;
}