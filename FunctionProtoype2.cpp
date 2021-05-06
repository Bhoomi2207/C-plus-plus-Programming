#include <iostream>
using namespace std;
//****************************Function****************************//
int sum(int a, int b);
void g(void);
int main()
{
    int n1, n2;
    cout << "Enter first number:" << endl;
    cin >> n1;
    cout << "Enter second number:" << endl;
    cin >> n2;
    cout << "The sum is: " << sum(n1, n2) << endl;
    g();
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
};
void g(void)
{
    cout << "Hello, good morning!";
}
