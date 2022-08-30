#include<iostream>
using namespace std;
void simple(int p,int t,int r)
{
	int si;
	si=(p*t*r)/100;
	cout<<"The simple intrest is :: "<<si;
}
int main()
{
	int p,t,r,c;
	cout<<"enter the principle amt :: ";
	cin>>p;
	cout<<"enter the amt of time :: ";
	cin>>t;
	cout<<"enter 1 if you are a serior citizen (or) 0 if not senior citizen :: ";
	cin>>c;
	if(c==1)
	{
		r=12;
	}
	else
	{
		r=10;
	}
	simple(p,t,r);
	return 0;	
}
