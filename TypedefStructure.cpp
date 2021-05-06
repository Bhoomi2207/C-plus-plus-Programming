#include <iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char name;
    float salary;
} em;
int main()
{
    //************************Structures***************************//
    em info;
    info.eId = 1;
    info.name = 'B';
    info.salary = 120000;
    cout << "The valueis: " << info.eId << endl;
    cout << "The valueis: " << info.name << endl;
    cout << "The valueis: " << info.salary << endl;
    return 0;
}
