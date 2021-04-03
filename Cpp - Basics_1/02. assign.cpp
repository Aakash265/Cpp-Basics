#include<iostream>
using namespace std;
class demo1
{
	protected:
		int x, y;
		
};

class demo2 : protected demo1
{
	int a, b, z;
	public:
		void input(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void area()
		{
			z=x*y;
			cout<<"The area of the rectangle is: "<<z<<endl;
		}
};

main()
{
	demo2 d2;
	int l, br;
	cout<<"Enter the lenght of rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of rectangle: ";
	cin>>br;
	d2.input(l,br);
	d2.area();
}
