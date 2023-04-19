#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
private:
  string name;
  int salary;

public:
  Employee(string name, int salary)
  {
    this->name = name;
    this->salary = salary;
  }
  void ShowYourName() const
  {
    cout << "name: " << name << endl;
  }
  virtual int GetPay() const
  {
    return salary;
  }
  virtual void ShowSalaryInfo() const
  {
    ShowYourName();
    cout << "salary: " << GetPay() << endl
         << endl;
  }
};

class PermanentWorker : public Employee
{
public:
  PermanentWorker(string name, int wage) : Employee(name, wage)
  {
  }
};

class SalesWorker : public Employee
{
private:
  double bonusRatio;
  int performance;
  int salary;

public:
  SalesWorker(string name, int wage, int performance, double bonusRatio) : Employee(name, wage + performance * bonusRatio)
  {
  }
};

class TemporaryWorker : public Employee
{
private:
  int worktime;
  int hourlyWage;

public:
  TemporaryWorker(string name, int worktime, int hourlyWage) : Employee(name, worktime * hourlyWage)
  {
  }
};

class EmployeeHandler
{
private:
  Employee *empList[50];
  int empNum;

public:
  EmployeeHandler() : empNum(0)
  {
  }
  void AddEmployee(Employee *emp)
  {
    empList[empNum++] = emp;
  }
  void ShowAllSalaryInfo() const
  {
    for (int i = 0; i < empNum; i++)
      empList[i]->ShowSalaryInfo();
  }
  void ShowTotalSalary() const
  {
    int sum = 0;
    for (int i = 0; i < empNum; i++)
      sum += empList[i]->GetPay();
    cout << "salary sum: " << sum << endl;
  }
  ~EmployeeHandler()
  {
    for (int i = 0; i < empNum; i++)
      delete empList[i];
  }
};

int main(void)
{
  // 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
  EmployeeHandler handler;

  // 직원 등록
  handler.AddEmployee(new PermanentWorker("KIM", 1000));
  handler.AddEmployee(new PermanentWorker("LEE", 1500));
  handler.AddEmployee(new PermanentWorker("JUN", 2000));
  handler.AddEmployee(new SalesWorker("HWANG", 3000, 200, 0.5));
  handler.AddEmployee(new TemporaryWorker("GWON", 12, 100));

  // 이번 달에 지불해야 할 급여의 정보

  handler.ShowAllSalaryInfo();

  // 이번 달에 지불해야 할 급여의 총합
  handler.ShowTotalSalary();
  return 0;
}