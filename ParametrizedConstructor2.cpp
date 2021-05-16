#include <iostream>
using namespace std;
// //**************Parameterized & Defaukt Constructor************//
class point
{
    int x,y;
    public:
        point(int a, int b)
        {
            x=a;
            y=b;
        }
        void displayPoint()
        {
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
int main()
{
    point p(1,1);
    p.displayPoint();

    point q(1,1);
    p.displayPoint();
    return 0;
}
