#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i;
	cout<<"Enter the number for factorial :::";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial of the given number is :: "<<fact;
}
