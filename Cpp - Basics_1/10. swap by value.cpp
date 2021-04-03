#include<iostream>
using namespace std;
void swap(int x, int y);
main()
{
	int a,b;
	cout<<"Enter two nos: ";
	cin>>a>>b;
	swap(a,b);
	cout<<"After function:"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b=  "<<b;
}
void swap(int x, int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
}
