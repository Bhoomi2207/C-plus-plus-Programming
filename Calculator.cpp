#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char choice;
	cout<<"Enter you choice:"<<endl;
	cin>>choice;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	
	
	switch(choice)
	{
		case '+':
			cout<<"Answer:"<<a+b;
			break;
		case '-':
			cout<<"Answer:"<<a-b;
			break;
		case '*':
			cout<<"Answer:"<<a*b;
			break;
		case '/':
			cout<<"Answer:"<<a/b;
			break;
		default:
			cout<<"Wrong case:";
			break;
	}
	return 0;
}
