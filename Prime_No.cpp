#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter number:"<<endl;
	cin>>n;
	for(i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(n==i)
	{
		cout<<n<<" is a prime number.";
	}
	else
	{
		cout<<n<<" is not a prime number.";
	}
	return 0;
}
