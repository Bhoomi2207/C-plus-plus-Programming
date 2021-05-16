#include <iostream>
using namespace std;
//**************Parameterized & Defaukt Constructor************//
class complex
{
    int a,b;
    public:
        complex(int, int);
        void printNumber()
        {
            cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex::complex(int x, int y) //This is a parameterized constructor which takes two parameters
{
    a=x;
    b=y;
}
int main()
{
    //Implict call
    complex a(3,4);
    a.printNumber();

    //Explict call
    complex b = complex(4,6);
    b.printNumber();
    return 0;
}   

  
