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
      cout << "�߸��� ��ġ���� ����" << endl;
      return false;
    }

    point1 = a;
    point2 = b;
    return true;
  }
  void ShowRecInfo() const
  {
    cout << "�� ���: " << '[' << point1.jwapyo[0] << ", " << point1.jwapyo[1] << ']' << endl;
    cout << "�� �ϴ�: " << '[' << point2.jwapyo[0] << ", " << point2.jwapyo[1] << ']' << endl
         << endl;
  }
};