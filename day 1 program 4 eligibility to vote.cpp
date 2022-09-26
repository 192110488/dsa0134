#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the age ::";
	cin>>n;
	if(n>=18)
	{
		cout<<"You are eligible to vote in this election ....";
	}
	else
	{
		cout<<"You are not eligible to vote in this election ....\n";
		cout<<"You have to wait for an other "<<18-n<<" years .";
	}
	return 0;
}
