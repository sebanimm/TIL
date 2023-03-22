#include <iostream>
#include "Point.cpp"
using namespace std;

class Rectangle
{
private:
  Point point1;
  Point point2;

public:
  bool InitMembers(const Point &a, const Point &b)
  {
    if (a.jwapyo[0] > b.jwapyo[1] || a.jwapyo[0] > b.jwapyo[1])
    {
      cout << "잘못된 위치정보 전달" << endl;
      return false;
    }

    point1 = a;
    point2 = b;
    return true;
  }
  void ShowRecInfo() const
  {
    cout << "좌 상단: " << '[' << point1.jwapyo[0] << ", " << point1.jwapyo[1] << ']' << endl;
    cout << "우 하단: " << '[' << point2.jwapyo[0] << ", " << point2.jwapyo[1] << ']' << endl
         << endl;
  }
};