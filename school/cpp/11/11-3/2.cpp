#include <iostream>
using namespace std;

class point
{
private:
  int xpos, ypos;

public:
  point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
  void show() const
  {
    cout << xpos << ' ' << ypos << endl;
  }
};

template <class T>
void Swapdata(T &ref1, T &ref2)
{
  T temp = ref1;
  ref1 = ref2;
  ref2 = temp;
}

int main()
{
  point a(10, 20);
  point b(30, 40);
  Swapdata(a, b);
  a.show();
  b.show();
  return 0;
}