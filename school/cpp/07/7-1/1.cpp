#include <iostream>
using namespace std;

class car
{
private:
  int gasoline;

public:
  car(int n) : gasoline(n)
  {
  }
  int getgas()
  {
    return gasoline;
  }
};

class hybridcar : public car
{
private:
  int electric;

public:
  hybridcar(int n, int m) : car(n), electric(m)
  {
  }
  int getelec()
  {
    return electric;
  }
};

class hybridwatercar : public hybridcar
{
private:
  int watergauge;

public:
  hybridwatercar(int n, int m, int l) : hybridcar(n, m), watergauge(l)
  {
  }
  void show()
  {
    cout << getgas() << endl;
    cout << getelec() << endl;
    cout << watergauge << endl;
  }
};

int main()
{
  hybridwatercar c3(79, 65, 35);
  c3.show();
  return 0;
}