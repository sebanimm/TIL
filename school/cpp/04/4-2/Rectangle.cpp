#include <iostream>
#include "Point.cpp"
using namespace std;

class Rectangle
{
private:
  Point upLeft;
  Point lowRight;

public:
  bool InitMembers(const Point &ul, const Point &lr)
  {
    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
    {
      cout << "�߸��� ��ġ���� ����" << endl;
      return false;
    }

    upLeft = ul;
    lowRight = lr;
    return true;
  }
  void ShowRecInfo() const
  {
    cout << "�� ���: " << '[' << upLeft.GetX() << ", ";
    cout << upLeft.GetY() << ']' << endl;
    cout << "�� �ϴ�: " << '[' << lowRight.GetX() << ", ";
    cout << lowRight.GetY() << ']' << endl
         << endl;
  }
};