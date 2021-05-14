#include <iostream>
using namespace std;
//********************Static memebers***************************//
class Employee
{
  int id;
  static int count;
  public:
    void setData(void)
    {
      cout<<"Enter id "<<endl;
      cin>>id;
      count++;
    }
    void getData(void)
    {
      cout<<"The id of this employee is "<<id<<" and this employee number "<<count<<endl;
    }
    static void getCount(void)
    {
      cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count;
int main()
{
  Employee A,B,C;
  A.setData();
  A.getData();
  Employee::getCount();
  
  B.setData();
  B.getData();
  Employee::getCount();

  C.setData();
  C.getData();
  Employee::getCount();

  return 0;
}
