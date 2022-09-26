#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[100],str2[100];
	cout<<"Enter the first string :: ";
	gets(str1);
	cout<<"Enter the second string :: ";
	gets(str2);
	if(str1==str2)
	{
		cout<<"valid inputs...";
	}
	else
	{
		cout<<"Invalid inputs...";
		
	}
	
}
