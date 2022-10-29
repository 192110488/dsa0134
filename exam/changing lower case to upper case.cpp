#include<iostream>
using namespace std;
class string1
{
	private:
		string str[30];
	public:
		void getstring()
		{
			cout<<"enter the string :: ";
			cin>>str;	
		} 
	void uppercase()
	{
		char temp_str[30];
		int i;
		for(i=0;str[i];i++)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				temp_str[i]=str[i]-32;
			}
			else
			{
				temp_str[i]=str[i];
			}
		}
		temp_str[i]=0;
		return temp_str;
	}
};
int main()
{
	string1 S;
	string1 s;
	S.getstring();
	s=S.uppercase();
	cout<<"The upper case string ::"<<s;
	return 0;
}
