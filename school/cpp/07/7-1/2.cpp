#include <iostream>
#include <cstring>
using namespace std;

class myfriend
{
private:
  char *name;
  int age;

public:
  myfriend(const char *name, int age) : age(age)
  {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
  }

  void show()
  {
    cout << name << endl;
    cout << age << endl;
  }
};

class myfriendinfo : public myfriend
{
private:
  char *addr;
  char *phone;

public:
  myfriendinfo(const char *name, int age, const char *addr, const char *phone) : myfriend(name, age)
  {
    this->addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);

    this->phone = new char[strlen(phone) + 1];
    strcpy(this->phone, phone);
  }

  ~myfriendinfo()
  {
    delete[] addr;
    delete[] phone;
  }

  void showinfo()
  {
    show();
    cout << addr << endl;
    cout << phone << endl;
  }
};

int main()
{
  myfriendinfo f("박제현", 20, "해운대", "1671");
  f.showinfo();

  myfriendinfo f2("박지성", 30, "동래", "7777");
  f2.showinfo();

  return 0;
}
