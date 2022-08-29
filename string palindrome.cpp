#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[100];
	string str2="";
	int a,i;
	cout<<"enter the name :: ";
	cin>>str1;
	a=strlen(str1);
	for(i=a-1;i>=0;i--)
	{
		str2=str2+str1[i];
	}
	cout<<str2;
	if(str1==str2)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
	return 0;
}
