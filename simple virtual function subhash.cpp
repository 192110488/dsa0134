#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void print()
		{
			cout<<"virtual base  function invoked .";
			
		}
};
class Derived:public Base
{
	public:
		void print()
		{
			cout<<"Functionalitis can be over rided with in its derived class..\nDerived function invoked .";
		}
};
int main()
{
	Derived d1;
	Base* b1 = &d1 ;
	b1->print();
	return 0;
}
