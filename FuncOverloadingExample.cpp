#include <iostream>
using namespace std;
//***************************Function Overloading****************************//
int sum(float a, int b)
{
  cout<<"Using function with 2 arguments:"<<endl;
  return a+b;
}
int sum(int a, int b, int c)
{
  cout<<"Using function with 3 arguments:"<<endl;
  return a+b+c;
}
int main()
{
  cout<<"The sum of 3 and 4 "<<sum(3,4)<<endl;
  cout<<"The sum of 3,4 and 6 "<<sum(3,4,6)<<endl;
  return 0;
}
