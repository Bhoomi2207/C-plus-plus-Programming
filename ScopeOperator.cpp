#include <iostream>
using namespace std;
int c= 10; //Global variable
int main()
{
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    c = a + b;
    cout<<"The sum c is: "<<c<<endl;
    cout<<"The global variable c is: "<<::c; //To get the value of the global variable c,we use scope resolution operator "::" with the "c" variable
    return 0;
}
