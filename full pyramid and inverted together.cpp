#include<iostream>
using namespace std;
int main()
{
	int n,i,space,j;
	cout<<"Enter the number of rows :: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(space=1;space<i;space++)
			cout<<" ";
		for(j=i;j<=n;j++)
			cout<<"* ";
		cout<<"\n";
	}
	for(i=1;i<=n;i++)
	{
		for(space=n;space>i;space--)
			cout<<" ";
		for(j=0;j<i;j++)
			cout<<"* ";
		cout<<"\n";
	}
	cout<<"\n";
	return 0;
}
