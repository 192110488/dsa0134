#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			cout<<"enter the a:: ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			cout<<"enter the b:: ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			cout<<c[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
