#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[100];
	string str2="";
	int n,i;
	cout<<"Enter the word::";
	gets(str1);
	n=strlen(str1);
	for(i=n-1;i>=0;i--)
	{
		str2=str2+str1[i];
	}
	cout<<str2;
	if(str1==str2)
	{
		cout<<"\n The entered string is palindrone.....";
	}
	else
	{
		cout<<"\n The entered string is not a palindrone ......";
	}
	return 0;
	
}
