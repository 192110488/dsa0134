#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"enter the noof rows :: ";
	cin>>n;
	for (i=0;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=0;k<i;k++)
		{
			cout<<"*";
		}
	cout<<"\n";	
	}
	
	return 0;
}
