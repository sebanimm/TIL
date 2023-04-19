#include <iostream>
using namespace std;

class SinivelCap // Äà¹° Ã³Ä¡¿ë Ä¸½¶
{
public:
  void Take() const { cout << "Äà¹° ³ªÀ½" << endl; }
};

class SneezeCap // ÀçÃ¤±â Ã³Ä¡¿ë Ä¸½¶
{
public:
  void Take() const { cout << "ÀçÃ¤±â ¸ØÃã" << endl; }
};

class SnuffleCap // ÄÚ¸·Èû Ã³Ä¡¿ë Ä¸½¶
{
public:
  void Take() const { cout << "ÄÚ¸·Èû »ç¶óÁü" << endl; }
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