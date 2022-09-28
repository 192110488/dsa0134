#include<iostream>
using namespace std;
int main()
{
	int n=100,a[100],c=0,i,s=-1,sum=0;
	float avg;
	cout<<"Enter '-1' if you want to quit the program ......";
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		cout<<"enter the number ::";
		cin>>a[i];
		if(a[i]==s)
		{
			break;
		}
		else
		{
			c=c+1;
			continue;
		}
	}
	for(i=1;i<=c;i++)
	{
		cout<<a[i]<<" ";
		sum=sum+a[i];
	}
	cout<<"\n";
	cout<<"noof elements of the array are :: "<<c;
	cout<<"\n";
	cout<<"Sum of all elements is :: "<<sum;
	cout<<"\n";
	avg=sum/c;
	cout<<"The Average of the elements of the array you have entered is :: "<<avg<<" ....";
	return 0;
}
