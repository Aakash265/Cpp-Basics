// friend func with constructors
#include<iostream>
using namespace std;
class meter; 
class feet
{
	float x, z;
	public:
		feet(float f, float i)
		{
			x=f;
			z=i;
		}
		friend void calc(feet, meter);
};

class meter
{
	float y, w;
	public: 
		meter(float m, float cm)
		{
			y=m*3.28;
			w=cm*0.394;
		}
		friend void calc(feet, meter);
};

void calc(feet ob1, meter ob2)
{
	cout<<"Sum of distances: "<<ob1.x+ob2.y<<" feets "<<ob1.z+ob2.w<<" inches";
}

main()
{
	float a, b, c, d;
	cout<<"Enter first distance in feets: ";
	cin>>a;
	cout<<"Inches: ";
	cin>>c;
	cout<<"Enter second distance in meters: ";
	cin>>b;
	cout<<"Centimeter: ";
	cin>>d;
	feet ob1(a,c);
	meter ob2(b,d);
	calc(ob1, ob2);
}
