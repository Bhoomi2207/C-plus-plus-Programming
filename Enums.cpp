#include <iostream>
using namespace std;
int main()
{
    //*************************Enums*******************************//
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = breakfast;
    cout << m1;
    return 0;
}
