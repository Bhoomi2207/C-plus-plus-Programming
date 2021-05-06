#include <iostream>
using namespace std;
struct employee
{
    int eId;
    char name;
    float salary;
};
int main()
{
    //************************Structures***************************//
    struct employee info;
    info.eId = 1;
    info.name = 'B';
    info.salary = 120000;
    cout << "The valueis: " << info.eId << endl;
    cout << "The valueis: " << info.name << endl;
    cout << "The valueis: " << info.salary << endl;
    return 0;
}
