#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev=0,org;
	cout<<"Enter the number :: ";
	cin>>n;
	n=org;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==org)
	{
		cout<<"This number is a palindrome number.. ";
	}
	else
	{
		cout<<"This is not a palindrone .. ";
	}
	return 0;
	
}
