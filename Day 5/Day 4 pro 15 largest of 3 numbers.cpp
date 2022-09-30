#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number a :: ";
	cin>>a;
	cout<<"Enter the second number a :: ";
	cin>>b;
	cout<<"Enter the third number a :: ";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"The largest number is a= "<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"The largest number is b= "<<b;
	}
	else
	{
		cout<<"The largest number is c= "<<c;
	}
	return 0;
}
