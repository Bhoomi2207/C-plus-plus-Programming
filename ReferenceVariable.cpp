#include <iostream>
using namespace std;
int main()
{
    float x=34;
    float &y =x;
    cout<<y<<endl;  //y is referencing the value of the variable x
    return 0;
}
