#include<iostream>
using namespace std;
class second; //pre- declaration  of 2nd class because "class second" is used in the "class first" and it has to be declared first before its use for no error.
class first
{
	int x;
	public:
		first(int j)
		{
			x=j;
		}
		friend void f1(first, second);
};

class second
{
	int y;
	public:
		second(int k)
		{
			y=k;
		}
		friend void f1(first, second);
};

void f1(first obj1, second obj2)
{
	cout<<"Difference: "<<obj1.x- obj2.y;
}

main()
{
	first obj1(10);
	second obj2(5);
	f1(obj1, obj2);
}
