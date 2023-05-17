#include <iostream>
using namespace std;

class Point
{
private:
  int xpos, ypos;

public:
  Point(int x, int y) : xpos(x), ypos(y) {}
  friend Point operator-(const Point &pos1, const Point &pos2);
  friend bool operator==(const Point &pos2, const Point &pos3);
  friend bool operator!=(const Point &pos2, const Point &pos3);

  Point operator+=(const Point &ref)
  {
    Point pos(xpos + ref.xpos, ypos + ref.ypos);
    this->xpos = pos.xpos;
    this->ypos = pos.ypos;
    return pos;
  }

  Point operator-=(const Point &ref)
  {
    Point pos(xpos - ref.xpos, ypos - ref.ypos);
    this->xpos = pos.xpos;
    this->ypos = pos.ypos;
    return pos;
  }

  void ShowPosition()
  {
    cout << "[" << xpos << ", " << ypos << "]" << endl;
  }
};

Point operator-(const Point &ref1, const Point &ref2)
{
  Point pos(ref1.xpos - ref2.xpos, ref1.ypos - ref2.ypos);
  return pos;
}

bool operator==(const Point &ref1, const Point &ref2)
{
  return ref1.xpos == ref2.xpos && ref1.ypos == ref2.ypos;
}

bool operator!=(const Point &ref1, const Point &ref2)
{
  return ref1.xpos != ref2.xpos && ref1.ypos != ref2.ypos;
}
int main(void)
{
  Point pos1(20, 30);
  Point pos2(5, 7);
  Point pos3(5, 7);

  (pos1 - pos2).ShowPosition();
  (pos2 += pos3).ShowPosition();

  if (pos2 == pos3)
    cout << "equal" << endl;
  else
    cout << "not equal" << endl;

  (pos2 -= pos3).ShowPosition();

  if (pos2 != pos3)
    cout << "not equal" << endl;
  else
    cout << "equal" << endl;
  return 0;
}