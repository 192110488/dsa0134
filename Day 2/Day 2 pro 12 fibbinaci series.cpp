#include<iostream>
using namespace std;
int main()
{
	int n,f1=0,f2=1,fib=0,i;
	cout<<"Enter the number:: ";
	cin>>n;
	cout<<"The fibbonacci series are as follow ::";
	cout<<f1<<" ";
	cout<<f2<<" ";
	for(i=2;i<=n;i++)
	{
		fib=f1+f2;
		cout<<fib<<" ";
		f1=f2;
		f2=fib;
	}
	return 0;
	
	
}
