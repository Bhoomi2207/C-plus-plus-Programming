#include <iostream>
using namespace std;
int main()
{
    //******************Continue statement**************************//
    for(int i=0; i<10; i++)
    {
        if(i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}