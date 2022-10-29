#include<iostream>
using namespace std;
int main()
{
	int n,i,a;
	cout<<"enter the noof numbers:: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the sorted elements::\n";
	for(i=0;i<n;i++)
	{
		cout<<"number "<<i+1<<":: ";
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]!=i)
		{
			a=i;
			break;	
		}
		else
		{
			continue;
		}
	}
	cout<<"The smallest number missed in the array is ::"<<a;
	return 0;
	
}
