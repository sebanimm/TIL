#include <iostream>
using namespace std;

class SinivelCap // �๰ óġ�� ĸ��
{
public:
  void Take() const { cout << "�๰ ����" << endl; }
};

class SneezeCap // ��ä�� óġ�� ĸ��
{
public:
  void Take() const { cout << "��ä�� ����" << endl; }
};

class SnuffleCap // �ڸ��� óġ�� ĸ��
{
public:
  void Take() const { cout << "�ڸ��� �����" << endl; }
};
class CONTAC600
{
private:
  SinivelCap scap;
  SnuffleCap ncap;
  SneezeCap zcap;

public:
  void Take() const
  {
    scap.Take();
    ncap.Take();
    zcap.Take();
  }
};
class ColdPatient
{
public:
  void TakeCONTAC600(const CONTAC600 &cap) const { cap.Take(); }
};

int main(void)
{
  CONTAC600 cap;
  ColdPatient sufferer;
  sufferer.TakeCONTAC600(cap);
  return 0;
}