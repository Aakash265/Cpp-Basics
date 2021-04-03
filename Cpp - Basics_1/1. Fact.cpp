#include<iostream>
using namespace std;
class factorial
{
	int x, f;
	
	public:
		void fact();// fn declaration
};
void factorial::fact() //fn definition
		{
			int i;
			f=1;
			cout<<"Enter the number:";
			cin>>x;
			for (i=1; i<=x; i++)
				{
					f=f*i;
				}
			cout<<"The factorial is: "<<f;
		}
main()
{
	factorial a;
	a.fact(); //fn calling
}

