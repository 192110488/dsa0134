#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the date :: ";
	cin>>a>>b>>c;
	if(a>0 && a<=31)
	{
		if(b>0 && b<=12)
		{
			if(c>=1000)
			{
				if(c%4==0)
				{
					cout<<"It is a leap year.";
				}
				else
				{
					cout<<"It is not a leap year .";
				}
			}
			else
			{
				cout<<"Invalid .check the entered year...";
			}
		}
		else
		{
			cout<<"Invalid .check the entered month....";
		}
	}
	else
	{
		cout<<"Invalid .check the entered date.....";
	}
	return 0;
}
