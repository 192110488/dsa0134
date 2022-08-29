#include<iostream>
using namespace std;
int  main()
{
	int y;
	cout<<"enter the age :: ";
	cin>>y;
	if(y!=0)
	{
		if(y>=18)
		{
			cout<<"you are eligible to vote ...";
		}
		else
		{
			cout<<"you are not eligible to vote .. you need to wait for another "<< 18-y <<" years";
		}
	}
	else
	{
		cout<<"enter the valid age please ..";
	}
	return 0;
}
