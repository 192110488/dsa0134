#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	char h='A';
	cout<<"enter the noof rows ::";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<h;
		}
		cout<<"\n";
		h++;
	}
	return 0;
}
