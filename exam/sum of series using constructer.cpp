#include<iostream>
using namespace std;
int sum4;
class temp
{
	public:
		int a,b,c,d,e,sum1,sum2,sum;
		temp(int a,int b)
		{
			a=a;
			b=b;
			int x;
			sum4=a+b;
			cout<<"sum1="<<sum4;
		}
        temp(int c,int d,int e)
		{
			c=c;
			d=d;
			e=e;
			int y;
			sum2=c+d+e;
			cout<<"sum2="<<sum2;
		
		sum=sum4+sum2;
		cout<<"The sum of series :: "<<sum;
	}
		 
};
int main()
{
	int a,b,c,d,e,m,n,sum;
	cout<<"Enter the number1 :: ";
	cin>>a;
	cout<<"Enter the number2:: ";
	cin>>b;
	cout<<"Enter the number3 :: ";
	cin>>c;
	cout<<"Enter the number4 :: ";
	cin>>d;
	cout<<"Enter the number5 :: ";
	cin>>e;
	temp t1(a,b);
	temp t2(c,d,e);

//	cout<<"The sum of series :: "<<sum;
	return 0;
}
