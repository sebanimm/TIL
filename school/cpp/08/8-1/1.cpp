#include <iostream>
using namespace std;

class Employee
{
private:
  string name;
  int salary;

public:
  Employee(string name, int money)
      : name(name), salary(money)
  {
  }
  int GetPay() const
  {
    return salary;
  }
  void ShowSalaryInfo() const
  {
    cout << "name: " << name << endl;
    cout << "salary: " << GetPay() << endl
         << endl;
  }
};

class PermanentWorker : public Employee
{
public:
  PermanentWorker(string name, int money) : Employee(name, money) {}
};

class EmployeeHandler // 컨트롤 클래스 OR 핸들러 클래스(기능의 처리를 실제로 담당)
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
  handler.AddEmployee(new Employee("HWANG", 1));

  // 이번 달에 지불해야 할 급여의 정보
  handler.ShowAllSalaryInfo();

  // 이번 달에 지불해야 할 급여의 총합
  handler.ShowTotalSalary();
  return 0;
}