#include<iostream>
using namespace std;
int main()
{
	int sq,l,b,r;
	cout<<"Enter the length of side of square :: ";
	cin>>sq;
	cout<<" The area of the square is :: "<<sq*sq<<" .sq.units..";
	cout<<"\n Enter the length of the rectangle :: ";
	cin>>l;
	cout<<"\n";
	cout<<" Enter the breadth of the rectangle :: ";
	cin>>b;
	cout<<"\n";
	cout<<" The area of the rectangle :: "<<l*b<<" .sq.units...";
	cout<<"\n Enter the radius of the circle :: ";
	cin>>r;
	cout<<"\n";
	cout<<" The area of the circle is :: "<<3.14*r*r;
	return 0;
}
