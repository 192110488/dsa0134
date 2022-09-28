#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,m;
	cout<<"enter the min number :: ";
	cin>>a;
	cout<<"enter the max number :: ";
	cin>>b;
	for(i=a;i<=b;i++)
	{
		m=i/2;
		for(j=1;j<=m;j++)
		{
			if(i%2==0)
			{
				cout<<i<<" ";
				break;
			}
			else
			{
				break;
			}
		}
	}
	return 0;
}
