#include <iostream>
using namespace std;
int main()
{
    float d = 3.4;
    long double e = 3.4;
    cout<<"<------------Float, double and long literals------------->"<<endl;
    cout<<"The size of 3.4 is: "<<sizeof(3.4)<<endl;
    cout<<"The size of 3.4f is: "<<sizeof(3.4f)<<endl;
    cout<<"The size of 3.4F is: "<<sizeof(3.4F)<<endl;
    cout<<"The size of 3.4l is: "<<sizeof(3.4l)<<endl;
    cout<<"The size of 3.4L is: "<<sizeof(3.4L)<<endl;    
    return 0;
}
