#include <iostream>
using namespace std;
//*****************************Constructor with defualt argument**********//
class simple
{
    int d1, d2, d3;

public:
    simple(int a, int b = 1, int c = 2)
    {
        d1 = a;
        d2 = 1;
        d3 = c;
    }
    void print();
};
void simple::print()
{
    cout << "Your value of d1, d2 and d3 are " << d1 << ", " << d2 << " and " << d3 << "." << endl;
};
int main()
{
    simple s(12, 13);
    s.print();
    return 0;
}
