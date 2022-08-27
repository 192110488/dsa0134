#include<iostream>
using namespace std;
class student
{
	public:
		student ()
		{
		cout<<"Default constructor invoked \n";
		}
};
int main()
{
	student s1;
	student s2;
	student s3;
	return 0;
}
