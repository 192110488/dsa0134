#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter the number to find factors :: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
			cout<<i<<" ";
		}
	}
	cout<<"\n Noof factors of the given number is :: "<<c;
	return 0;
}
