#include <iostream>
using namespace std;

class rectangle
{
private:
  int width;
  int height;

public:
  rectangle(int a, int b) : width(a), height(b) {}
  void show()
  {
    cout << width * height << endl;
  }
};

class square : public rectangle
{
public:
  square(int a) : rectangle(a, a)
  {
  }
  void showinfo()
  {
    show();
  }
};

int main(void)
{
  rectangle rec(4, 3);
  rec.show();
  square sqr(7);
  sqr.showinfo();

  return 0;
}