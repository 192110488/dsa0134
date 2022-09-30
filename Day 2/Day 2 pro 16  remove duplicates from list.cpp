#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[50],dup[50],i,j,k,n;
	cout<<"enter the size of the array :: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the number:: ";
		cin>>a[i];
		dup[i]=-1;
	}
	cout<<"\nThe list of numbers you printed are :: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				j--;
				n--;
			}
		}
	}
	sort(a,a+n);
	cout<<"\nThe list numbers after the removal of the duplicate elements:: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
