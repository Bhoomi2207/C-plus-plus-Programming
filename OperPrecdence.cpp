#include <iostream>
using namespace std;
int main()
{
    //****************Operator precedence****************//
    int a=3, b=4;
    int c=((((a*5)+b)-45)+23);
    cout<<c;
    return 0;
}
