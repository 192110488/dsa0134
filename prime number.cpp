#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	cout<<"enter the number you want to check::";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%2==0)
		{
			cout<<"not a prime number .";
			break;
		}
		else
		{
			cout<<"prime number .";
			break;
		}
	}
	return 0;
}
