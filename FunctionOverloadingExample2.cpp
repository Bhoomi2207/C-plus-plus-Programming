#include <iostream>
using namespace std;
//***********************Volume function overloading example**************//
//Volume of cube
int volume(double r, int h)
{
  return (3.14*r*r*h);
}
//volume of cylinder
int volume(int a)
{
  return (a*a*a);
}
//volume of rectangle
int volume(int l, int h, int b)
{
  return (l*b*h);
}
int main()
{
  cout<<"The volume of cubolid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
  cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
  cout<<"The volume of rectangle of side 3 is "<<volume(3,3,3)<<endl;
  return 0;
}
