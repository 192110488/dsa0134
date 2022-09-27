#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,max,min,i,a,b;
	cout<<"enter the noof numbers of elements:: ";
	cin>>l;
	int arr[l];
	for(i=1;i<=l;i++)
	{
		cout<<"enter the element "<<i<<" :: ";
		cin>>arr[i];
	}
	sort(arr,arr+l);
	cout<<"enter the maximum number :: ";
	cin>>max;
	cout<<"enter the minimum number :: ";
	cin>>min;
	a=arr[l-max];
	b=arr[min-1];
	cout<<"the sum of numbers is ::"<<a+b;
	cout<<"\n";
	cout<<"the diff of numbers is ::"<<a-b;
	
	return 0;
}
