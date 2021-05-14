#include <iostream>
using namespace std;
//*****************Objects of Array***************************//
class Employee
{
  int id;
  int salary;

public:
  void setId(void)
  {
    salary = 100;
    cout << "Enter the id of employee " << endl;
    cin >> id;
  }
  void getId(void)
  {
    cout << "The id of the employee is " << id << endl;
  }
};
int main()
{
  Employee b[4];
  for (int i = 0; i < 4; i++)
  {
    b[i].setId();
    b[i].getId();
  }
  return 0;
}
