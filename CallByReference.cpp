#include <iostream>
using namespace std;
//*************************Call by reference using pointers***************//
void swapPointer(int* a, int * b)
{
    //Swapping values of two variables
    int temp = *a;
    *a = *b;
    *b= temp;
}
int main()
{
    int x=2, y=4;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}
