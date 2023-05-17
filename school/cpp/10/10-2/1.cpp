#include <iostream>
using namespace std;

class Point
{
private:
  int xpos, ypos;

public:
  Point(int x, int y) : xpos(x), ypos(y) {}
  Point operator-()
  {
    Point pos(-xpos, -ypos);
    return pos;
  };
  Point operator~()
  {
    Point pos(this->ypos, this->xpos);
    this->xpos = pos.ypos;
    this->ypos = pos.xpos;
    return pos;
  };
  void ShowPosition()
  {
    cout << "[" << xpos << ", " << ypos << "]" << endl;
  }
};

int main(void)
{
  Point pos1(9, -7);
  pos1.ShowPosition();
  Point pos2 = -pos1;
  pos2.ShowPosition();
  (~pos2).ShowPosition();
  pos2.ShowPosition();
  return 0;
}