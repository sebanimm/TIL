#include <iostream>
using namespace std;

class Point
{
public:
  int jwapyo[2];
  bool InitMembers(int x, int y)
  {
    if (x < 0 || y < 0)
    {
      cout << "��� ������ �� ����" << endl;
      return false;
    }

    jwapyo[0] = x;
    jwapyo[1] = y;
    return true;
  }
};