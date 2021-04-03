#include<iostream>
using namespace std;
class type
{
	int a, b;
	public:
		void input()
		{
			cout<<"Enter the value of a: ";
			cin>>a;
			cout<<"Enter the value of b: ";
			cin>>b;
		}
		
		type operator += (type ob)
		{
			a=a+b;
			cout<<"The value of a is: "<<a<<endl;
		}
		
		type operator &= (type ob)
		{
			a=a&b;
			cout<<"The value of a is: "<<a<<endl;
		}
};
main()
{
	type ob1, ob2;
	ob1.input();
	ob1+=ob2;
	ob1&=ob2;
}

