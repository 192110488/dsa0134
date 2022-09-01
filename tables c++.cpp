#include<iostream>
using namespace std ;
class tables
{
	public:
		int t,i,a;
		void putdata(int t,int i)
			{
				a=t*i;
				cout<<t<<" "<<"*"<<" "<<i<<" = "<<a;
				cout<<"\n";
			}
};
int main()
{
	int t,m,i;
	cout<<"enter the number :: ";
	cin>>t;
	cout<<"enter the number of multiples :: ";
	cin>>m;
	tables t1;
	for (i=1;i<=m;i++)
	{
		t1.putdata(t,i);
	}
	return 0;
	
}
