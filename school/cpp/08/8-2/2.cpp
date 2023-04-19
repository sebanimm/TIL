#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class Employee
{
private:
  string name;
  int salary;

public:
  Employee(string name, int salary) : name(name), salary(salary)
  {
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
    cout << "salary: " << GetPay() << endl;
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
  string risk;
  double riskRatio;
  int additionalPay;
  int sum;

public:
  SalesWorker(string name, string risk, int wage, int performance, double bonusRatio) : Employee(name, wage + performance * bonusRatio), risk(risk)
  {
    riskRatio = risk == "A" ? 0.3 : risk == "B" ? 0.2
                                                : 0.1;
    additionalPay = floor(GetPay() * riskRatio);
    sum = additionalPay + GetPay();
  }
  int GetAdditionalPay() const
  {
    return additionalPay;
  }
  int GetSum() const
  {
    return sum;
  }
  void ShowSalaryInfo() const
  {
    ShowYourName();
    cout << "salary: " << GetPay() << endl;
    cout << "risk pay: " << GetAdditionalPay() << endl;
    cout << "sum: " << GetSum() << endl
         << endl;
  }
};

class TemporaryWorker : public Employee
{
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
  handler.AddEmployee(new SalesWorker("KIM", "A", 1000, 100, 0.5));
  handler.AddEmployee(new SalesWorker("LEE", "B", 1500, 240, 0.5));
  handler.AddEmployee(new SalesWorker("JUN", "B", 2000, 160, 0.5));
  handler.AddEmployee(new SalesWorker("HWANG", "B", 3000, 200, 0.5));
  handler.AddEmployee(new SalesWorker("GWON", "C", 2200, 500, 0.5));

  // 이번 달에 지불해야 할 급여의 정보

  handler.ShowAllSalaryInfo();

  // 이번 달에 지불해야 할 급여의 총합
  handler.ShowTotalSalary();
  return 0;
}