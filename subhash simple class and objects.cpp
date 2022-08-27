#include<iostream>
using namespace std;
class sample
{
	public:
		int a,b,c;
		void getdata();
		void putdata();
};
void sample::getdata()
{
	cout<<"\n enter the values of a and b";
	cin>>a>>b;
}
void sample::putdata()
{
	cout<<"the values of a and b are :: "<<a<<"\t"<<b;
}
int main()
{
	sample s;
	s.getdata();
	s.putdata();
	return 0;
}
