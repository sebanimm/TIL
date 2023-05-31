#include <iostream>
using namespace std;

template <class T>
T SumArray(T arr[], int len)
{
  T sum = 0;
  for (int i = 0; i < len; i++)
    sum += arr[i];
  return sum;
}

int main()
{
  int arrr[5] = {2, 3, 5, 7, 9};
  double arrrr[8] = {1.5,
                     2.2,
                     5.7,
                     8.9,
                     1.8,
                     6.3};
  cout << SumArray<int>(arrr, 5) << endl;
  cout << SumArray<double>(arrrr, 8) << endl;
  return 0;
}