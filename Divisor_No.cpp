#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter number to find it's divisor:"<<endl;
	cin>>n;
	cout<<"The divisor of "<<n<<" are:"<<endl;
	for(i=1; i<=n; i++)
	{ 
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	return 0;
}
