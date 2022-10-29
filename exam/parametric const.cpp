#include<iostream>
using namespace std;
class temp
{
	public:
		int a,b,c;
		temp(int a,int b,int c)
		{
			a=a;
			b=b;
			c=c;
			int x;
			x=(a*2)+(b*4)+(c*4);
			cout<<"Total legs :: "<<x;
		}
};
int main()
{
	int a,b,c;
	cout<<"Enter the noof chicks :: ";
	cin>>a;
	cout<<"Enter the noof goats :: ";
	cin>>b;
	cout<<"Enter the noof cows :: ";
	cin>>c;
	temp t1(a,b,c);
	return 0;
}
