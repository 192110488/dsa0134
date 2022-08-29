#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter the user name :: ";
	cin>>str1;
	cout<<"RE-enter the user name :: ";
	cin>>str2;
	if(str1==str2)
	{
		cout<<"valid";
	}
	else
	{
		cout<<"not valid.";
	}
	return 0;
}
