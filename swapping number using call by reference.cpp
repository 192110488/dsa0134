#include<iostream>
using namespace std;
void swap(float *x,float *y)
{
	float a=*x;
	float b=*y;
	cout<<"After swapping the values are A= "<<*y<<" and B= "<<*x;
}
int main()
{
	float a,b;
	cout<<"enter the two values ::";
	cin>>a>>b;
	if(a>0)
	{
	cout<<"Before swapping the values are a= "<<a<<" and b= "<<b;
	cout<<"\n";
	swap(&a,&b);
	}
	else
	{
		cout<<"enter valid input..";
	}
	return 0;
}
