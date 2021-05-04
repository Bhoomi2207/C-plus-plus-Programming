#include <iostream>
using namespace std;
int main()
{
    //*****************If Else statement*****************//
    int age;
    cout<<"Enter you age: ";
    cin>>age;
    if(age>18)
    {
        cout<<"You can't come to the party."<<endl;
    }
    else if(age==18)
    {
        cout<<"You are kid and you will get a kid pass for the party."<<endl;
    }
    else
    {
        cout<<"You can come to the part."<<endl;
    }
    return 0;
}
