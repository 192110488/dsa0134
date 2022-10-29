#include<iostream>
using namespace std;
class temp
{
	public:
		int getc()
		{
			float c,f;
			cout<<"Enter the temp in celcius:: ";
			cin>>c;
			f=((1.8*c)+32);
			return f;
		}
};
int main()
{
	float x;
	float f;
	temp t;
	x=t.getc();
	cout<<"temp "<<x;
	return 0;
}
