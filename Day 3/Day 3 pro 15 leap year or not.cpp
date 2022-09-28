#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"Enter the year :: ";
	cin>>y;
	if(y%4==0)
	{
		cout<<"It is an leap year ...";
	}
	else
	{
		cout<<"Not a leap year ....";
	}
	return 0;
}
