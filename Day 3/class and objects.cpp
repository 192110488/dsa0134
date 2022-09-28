#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll,a,b,c;
		char grade;
		void getdata();
		void putdata();
};
void student::getdata()
{
	cout<<"Enter the name :: ";
	cin>>name;
	cout<<"Enter the roll :: ";
	cin>>roll;
	cout<<"Enter the grade :: ";
	cin>>grade;
	cout<<"Enter the marks in 3 subjects :: ";
	cin>>a>>b>>c;
}
void student::putdata()
{
	cout<<"name :: "<<name;
	cout<<"\n";
	cout<<"roll :: "<<roll;
	cout<<"\n";
	cout<<"grade :: "<<grade;
	cout<<"\n";
}
int main()
{
	student s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s1.putdata();
	s2.putdata();
	s3.putdata();
	return 0;
}
