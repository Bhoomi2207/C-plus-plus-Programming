#include <iostream>
using namespace std;
//*********************Dynamic initializationof object using constructor**********//
class Bankdeposite
{
    int principle;
    int year;
    int interestRate;
    float returnValue;

public:
    Bankdeposite() {}
    Bankdeposite(int p, int y, float r);
    Bankdeposite(int p, int y, int R);
    void show();
};
Bankdeposite ::Bankdeposite(int p, int y, float r)
{
    principle = p;
    year = y;
    interestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
};
Bankdeposite ::Bankdeposite(int p, int y, int R)
{
    principle = p;
    year = y;
    interestRate = float(R) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
};
void Bankdeposite::show()
{
    cout << endl
         << "Principle amout was " << principle << " and return value after " << year << " is " << returnValue << endl;
};
int main()
{
    Bankdeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();

    cout << "Enter the value of p, y and r: " << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposite(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R: " << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposite(p, y, R);
    bd2.show();

    return 0;
}
    
