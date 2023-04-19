#include <iostream>
using namespace std;

class book
{
private:
  string title; // 책 제목
  string isbn;  // 국제표준도서번호
  int price;    // 책 정가
public:
  book(string title, string isbn, int price) : title(title), isbn(isbn), price(price) {}
  void show()
  {
    cout << title << endl;
    cout << isbn << endl;
    cout << price << endl;
  }
};

class ebook : public book
{
private:
  string dkey; // 인증키
public:
  ebook(string title, string isbn, int price, string dkey) : book(title, isbn, price), dkey(dkey) {}
  void showinfo()
  {
    show();
    cout << dkey << endl;
  }
};

int main()
{
  book cdp("c++", "111-111", 20000);
  ebook java("java", "222-222", 20000, "pjhnice");
  cdp.show();
  cout << endl;
  java.showinfo();
  return 0;
}