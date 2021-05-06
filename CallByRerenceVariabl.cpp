#include <iostream>
using namespace std;
//******************* Call by reference using reference variable************//
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b= temp;
}
int main()
{
    int x=4, y=2;
    cout<<"Before swapping: The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapByReference(x, y);
    cout<<"After swapping: The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}
