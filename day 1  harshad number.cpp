#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0;
	cout<<"enter the number ::";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<"The sum of the number is "<<sum<<" ...\n";
	if(n%sum==0)
	{
		cout<<"It is Harshad number.";
	}
	else
	{
		cout<<"It is not a Harshad number .";
	}
	return 0;
}
