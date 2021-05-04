#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "Your are 18."<<endl;
        break;
    case 21:
        cout << "Your are 21."<<endl;
        break;
    case 34:
        cout << "Your are 34."<<endl;
        break;
    default:
        cout << "Invalid age."<<endl;
        break;
    }
    cout << "Done with case."<<endl;
    return 0;
}
