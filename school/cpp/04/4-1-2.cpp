#include <iostream>
#include <cstring>
using namespace std;
namespace CAR_CONST
{
  enum
  {
    ID_LEN = 20,
    MAX_SPD = 200,
    FUEL_STEP = 2,
    ACC_STEP = 10,
    BRK_STEP = 10
  };
};
using namespace CAR_CONST;

class Car
{
private:
  char carId[ID_LEN];
  int currentSpeed;
  int currentFuel;

public:
  void InitMembers(char id[ID_LEN], int fuel)
  {
    strcpy(carId, id);
    currentFuel = fuel;
    currentSpeed = 0;
  }
  void Accel()
  {
    if (currentSpeed >= 200)
    {
      cout << "최대속력임" << endl;
      return;
    }
    currentFuel -= FUEL_STEP;
    currentSpeed += ACC_STEP;
  }
  void Break()
  {
    currentSpeed -= BRK_STEP;
  }
  void ShowCarState()
  {
    cout << "소유자ID: " << carId << endl;
    cout << "연료량: " << currentFuel << "%" << endl;
    cout << "현재속도: " << currentSpeed << "km/s" << endl
         << endl;
  }
};
int main(void)
{
  Car run99;
  run99.InitMembers("run99", 100);
  run99.Accel();
  run99.Accel();
  run99.Accel();
  run99.ShowCarState();
  run99.Break();
  run99.ShowCarState();
  return 0;
}