#include<iostream>
using namespace std;
int main()
{
	int f=1,n,k;
	cout<<"Enter numern to find factorial:"<<endl;
	cin>>n;
	for(k=1; k<=n; k++)
	{
		f=f*k;
	}
	cout<<"Factorial of "<<n<<" is: "<<f;
	return 0;
}
