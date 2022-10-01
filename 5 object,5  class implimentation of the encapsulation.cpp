#include <iostream>
using namespace std;
class Employee 
{
	private:
		string a,b,c,d,e;
	public:
		void seta(string s)
		{
			a = s;
		}
	string geta() 
	{
		return a;
	}
	public:
		void setb(string p)
		{
			b = p;
		}
	string getb() 
	{
		return b;
	}
	public:
		void setc(string g)
		{
			c = g;
		}
	string getc() 
	{
		return c;
	}
	public:
		void setd(string j)
		{
			d = j;
		}
	string getd() 
	{
		return d;
	}
	public:
		void sete(string z)
		{
			e = z;
		}
	string gete() 
	{
		return e;
	}
};
int main() {
Employee myObj;
myObj.seta("vijay bhargav.\n");
cout << myObj.geta();
myObj.setb("vihan.\n");
cout << myObj.getb();
myObj.setc("vikram chiayan.\n");
cout << myObj.getc();
myObj.setd("subhash varma.\n");
cout << myObj.getd();
myObj.sete("bimbisara.");
cout << myObj.gete();
return 0;
}
