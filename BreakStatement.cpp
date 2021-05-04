#include <iostream>
using namespace std;
int main()
{
    //******************Break statement**************************//
    for(int i=0; i<4; i++)
    {
        cout<<i<<endl;
        if(i==2)
        {
            break;
        }
    }
    return 0;
}
