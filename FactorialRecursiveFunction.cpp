#include<stdio.h>
using namespace std;
//*************************Recursive Function of factorial**********************//
int factorial(int n)
{
  if(n<=1)
  {
    return 1;
  }
  return n*factorial(n-1);
}
int main()
{
  int a;
  cout<<"Enter a number"<<endl;
  cin>>a;
  cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
  return 0;
}
