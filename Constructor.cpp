#include <iostream>
using namespace std;
//*********************Constructor*************************//
class Complex
{
    /*creating a constructor
      Constructor is a special member function with the same name as of the class. It is automatically 
      invocted whenever an object is created. It is used to initialize the object of its class
    */
   int a,b;
   public:
   Complex(void);         //Constructor declaration
    void printNumber()
    {
        cout<<"Your number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex::Complex(void) --> //It's a defualt constructor as it has no parameter
{
    a = 10;
    b = 0;
}
int main()
{
    Complex c;
    c.printNumber();
    return 0;
}
/* Characteristics of constructor 
1. It should be declared in the public section of the class.
2. They are invoed whenever the object is created.
3. They can't return values. Don't have return types.
4. It can have defualt arguments.
5. We can't refer to their address.
*/
