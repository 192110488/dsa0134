#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<" a = "<<a;
	cout<<"\n";
	cout<<" b = "<<b;
}
int main()
{
	int a,b;
	cout<<"enter the 1st num :: ";
	cin>>a;
	cout<<"enter the 2st num :: ";
	cin>>b;
	swap(a,b);
	return 0;
}
