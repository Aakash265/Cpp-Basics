#include<iostream>
using namespace std;
class frnd;
class demo
{
	int x, y;
	public:
		demo(int a, int b)
		{
			x=a;
			y=b;
		}
	friend class frnd;	
};

class frnd
{
	public:
		void display(demo d1)
		{
			cout<<"x= "<<d1.x<<endl;
			cout<<"y= "<<d1.y<<endl;
		}
		
		void sum(demo d1)
		{
			cout<<"Sum is: "<<d1.x+d1.y;
		}
};

main()
{
	demo d2(10,40);
	frnd f1;
	f1.display(d2);
	f1.sum(d2);
}
