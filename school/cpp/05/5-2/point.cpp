#include <iostream>
using namespace std;

class Point
{
  int x;
  int y;

public:
  Point(const int &xpos, const int &ypos)
  {
    x = xpos;
    y = ypos;
  }
  int GetX() const { return x; }
  int GetY() const { return y; }
  bool SetX(int xpos) const
  {
    if (0 > xpos || xpos > 100)
    {
      cout << "��� ������ �� ����" << endl;
      return false;
    }
    return true;
  }
  bool SetY(int ypos) const
  {
    if (0 > ypos || ypos > 100)
    {
      cout << "��� ������ �� ����" << endl;
      return false;
    }
    return true;
  }
};
