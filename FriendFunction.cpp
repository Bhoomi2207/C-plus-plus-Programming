#include <iostream>
using namespace std;
//*************************Friend function********************//
class complex
{
  int a, b;

public:
  void setNo(int n1, int n2)
  {
    a = n1;
    b = n2;
  }
  friend complex sumComplex(complex o1, complex o2);
  void printNo(void)
  {
    cout << "Your number is " << a << "+" << b << "i" << endl;
  }
};
complex sumComplex(complex o1, complex o2)
{
  complex o3;
  o3.setNo((o1.a + o2.a), (o1.b + o2.b));
  return o3; 
}
int main()
{
  complex c1, c2, sum;
  c1.setNo(2, 4);
  c1.printNo();

  c2.setNo(5, 8);
  c2.printNo();
  sum = sumComplex(c1, c2);
  sum.printNo();
}   
