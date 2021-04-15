#include<iostream>
using namespace std;
int main()
{
	int sroom,lroom;
	const float price_sroom=20;
	const float price_lroom=30;
	const float tax=0.18;
	cout<<"Hello, Welcome to Bhoomi's carpter cleaning"<<endl;
	
	cout<<"How many small rooms do you want to clean?"<<endl;
	cin>>sroom;
	
	cout<<"How many large rooms do you want to clean?"<<endl;
	cin>>lroom;	
	
	cout<<"Estimate for carpet cleaning sevice"<<endl;
	cout<<"============================================="<<endl;
	cout<<"Number of small rooms:"<<sroom<<endl;
	cout<<"Number of large rooms:"<<lroom<<endl;
	cout<<"Price of cleaning of small room: $"<<sroom*price_sroom<<endl;
	cout<<"Price of cleaning of large room: $"<<lroom*price_lroom<<endl;
	cout<<"Cost:$"<<sroom*price_sroom + lroom*price_lroom<<endl;
	cout<<"Tax:$"<<(sroom*price_sroom + lroom*price_lroom)*tax<<endl;
	return 0;
}
