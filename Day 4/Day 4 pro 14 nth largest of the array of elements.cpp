#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,i;
	cout<<"Enter the noof numbers you are going to enter ::";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the number ";
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<"Enter the nth max number :: ";
	cin>>l;
	if(l>0 && l<=n)
	{
		cout<<"The maximum number in place "<<l<<" is ::"<<a[n-l];
	}
	else
	{
		cout<<"Enter valid number .";
	}
	return 0;
}
