#include<iostream>
using namespace std;
class over
{
	int x, y;
	public:
		int c;
		void input1(int x, int y)
		{
			c=x+y;
			cout<<c<<endl;
		}
		void input2(char a)
		{
			cout<<a<<endl;;
		}
		void input3(int x, float y)
		{
			float c;
			c=x+y;	
			cout<<c;
		}

};
main()
{
	over ob;
	ob.input1(2,8);
	ob.input2('d');
	ob.input3(5,5.0026);
}
