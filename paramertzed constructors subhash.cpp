#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		float salary;
	student(int i,string n,float s)
	{
		id = i;
		name = n;
		salary = s;
	}
	void display()
	{
		cout<<id<<" "<<name<<" "<<salary;
	}
};
int main()
{
	student s1 = student (122,"ytr",567890 );
	student s2 = student (1287,"hgfdxfghj",78990);
	s1.display();
	cout<<"\n";
	s2.display();
	return 0;
}
