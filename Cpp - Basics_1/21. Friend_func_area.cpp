#include<iostream>
#define pi 3.14
using namespace std;
class rectangle;
class circle
{
	float r, area;
	public: 
		void input()
		{
			cout<<"Enter the radius of circle: ";
			cin>>r;
		}
		void calc()
		{
			area=pi*r*r;
		}
		friend void display(circle, rectangle);
};
class rectangle
{
	float l, w, area;
	public:
		void input()
		{
			cout<<"Enter the lenght and width of the rectangle: ";
			cin>>l>>w;
		} 
		void calc()
		{
			area=l*w;
		}
		friend void display(circle, rectangle);
};
void display(circle c, rectangle r)
{
	cout<<"Area of circle is: "<<c.area<<endl;
	cout<<"Area of rectangle is: "<<r.area;	
}
main()
{
	circle c;
	rectangle r;
	c.input();
	c.calc();
	r.input();
	r.calc();
	display(c, r);
	
}
