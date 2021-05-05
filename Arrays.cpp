#include <iostream>
using namespace std;
int main()
{
    //***********************Arrays**********************************//
    int marks[4] = {23, 45, 67, 47};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << "<---------------------->" << endl;
    int mathMarks[4];
    mathMarks[0] = 34;
    mathMarks[1] = 454;
    mathMarks[2] = 335;
    mathMarks[3] = 78;
    cout << "This are marks of students:" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << "<---------------------->" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The marks of student " << i << " is " << marks[i] << endl;
    }
    return 0;
}
