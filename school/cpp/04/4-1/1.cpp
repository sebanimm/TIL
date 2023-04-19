#include <iostream>
using namespace std;

class FruitSeller
{
private:
  int APPLE_PRICE;
  int numOfApples;
  int myMoney;

public:
  void InitMembers(int price, int num, int money)
  {
    APPLE_PRICE = price;
    numOfApples = num;
    myMoney = money;
  }
  int SaleApples(int money)
  {
    int num = money / APPLE_PRICE;
    numOfApples -= num;
    myMoney += money;
    return num;
  }
  void ShowSalesResult()
  {
    cout << "���� ���: " << numOfApples << endl;
    cout << "�Ǹ� ����: " << myMoney << endl;
  }
};

class FruitBuyer
{
private:
  int numOfApples;
  int myMoney;

public:
  void InitMembers(int money)
  {
    numOfApples = 0;
    myMoney = money;
  }
  void BuyApples(FruitSeller &seller, int applePrice)
  {
    int num = seller.SaleApples(applePrice);
    myMoney -= applePrice;
    numOfApples += num;
  }
  void ShowBuyResult()
  {
    cout << "���� �ܾ�: " << myMoney << endl;
    cout << "��� ����: " << numOfApples << endl;
  }
};

int main(void)
{
  FruitSeller seller;
  seller.InitMembers(1000, 20, 0);
  FruitBuyer buyer;
  buyer.InitMembers(5000);
  buyer.BuyApples(seller, 2000);

  cout << "���� �Ǹ����� ��Ȳ" << endl;
  seller.ShowSalesResult();
  cout << "���� �������� ��Ȳ" << endl;
  buyer.ShowBuyResult();
  return 0;
}