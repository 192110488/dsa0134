#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,med,med1,medt,i;
	float mean;
	cout<<"Enter the number of numbers you are going to enter :: ";
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cout<<"enter the number ::";
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/n;
	cout<<"The mean is :: "<<mean<<" ...";
	sort(a,a+n);
	if(n%2==0)
	{
		med=n/2;
		med1=med+1;
		medt=((a[med-1]+a[med1-1])/2);
		cout<<"Median = "<<medt;
		cout<<"\n";
	}
	else
	{
		med=(n+1)/2;
		cout<<"Median = "<<a[med];
	}
	return 0;
}
