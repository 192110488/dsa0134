#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	int n=0,i,a,m;
	cout<<"enter the string .";
	gets(str);
	m=strlen(str);
	for(i=0;i<=m;i++)
	{
		if( str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='U' || str[i]=='O' )
		{
			n=n+1;
			cout<<" ";
		}
		else
		{
			cout<<str[i];
		}
	}
	cout<<"\n The total number of vowels are "<<n<<" ....";
	return 0;
}
