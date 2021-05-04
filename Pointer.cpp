#include <iostream>
using namespace std;
int main()
{
    //********************Pointers*********************************//
    int a = 3;
    int *b;
    b = &a;
    cout << "The address of a is: " << &a << endl; //Print the address of the a with the help of b
    cout << "The address of a is: " << b << endl;  //Print the address of the a with the help of b

    cout << "THe value of a is: " << *b << endl; //Prints the value of a
    cout << "<-----------Pointer to pointer------------------------->" << endl;
    int **c = &b;
    cout << "The address of b is: " << &b << endl;
    cout << "The address of b is: " << c << endl;
    cout << "The value at address c is: " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is: " << **c << endl;
    return 0;
}
