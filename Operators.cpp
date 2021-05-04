#include<iostream>
using namespace std;
int main()
{
    int a=6, b=4;
    cout<<"<------------------Operators in C++---------------------->"<<endl;
    // Arithmetic Operator
    cout<<"<------------------Arithmetic Operator------------------>"<<endl;
    cout<<"The value of a + b "<<a + b<<endl;
    cout<<"The value of a - b "<<a - b<<endl; 
    cout<<"The value of a * b "<<a * b<<endl; 
    cout<<"The value of a / b "<<a / b<<endl;
    cout<<"The value of a % b "<<a % b<<endl; 
    cout<<"The value of ++a "<<++a<<endl; 
    cout<<"The value of ++b "<<++b<<endl; 
    cout<<"The value of a++ "<<a++<<endl; 
    cout<<"The value of b++ "<<b++<<endl; 
    cout<<"The value of --a "<<--a<<endl; 
    cout<<"The value of --b "<<--b<<endl; 
    cout<<"The value of a-- "<<a--<<endl; 
    cout<<"The value of b-- "<<b--<<endl; 
    //Comparison operator
    cout<<"<-----------------Comparison Operator-------------------->"<<endl;
    cout<<"The value of (a==b) is "<<(a==b)<<endl;
    cout<<"The value of (a!=b) is "<<(a!=b)<<endl;
    cout<<"The value of (a>=b) is "<<(a>=b)<<endl;
    cout<<"The value of (a<=b) is "<<(a<=b)<<endl;
    cout<<"The value of (a>b) is "<<(a>b)<<endl;
    cout<<"The value of (a<b) is "<<(a<b)<<endl;
    //Logical operators
    cout<<"<----------------Logical operators----------------------->"<<endl;
    cout<<"The value of this logical 'and' operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical 'or' operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical 'not' operator (a!=b) is: "<<(a!=b)<<endl;
    //Assingment Operators
    cout<<"<----------------Assignemet Operator---------------------->"<<endl;
    int c=9,d=7;  //This assignemt is used to assigne values to variables
    char h='e';
    float f=4.5;
 
    return 0;
}
