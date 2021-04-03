// static function 
#include<iostream>
using namespace std;
class test
{
	public:
	static int s;
	void x(int r);
};
void test::x(int r)
{
	s=r;
	cout<<s;
}
int test::s=30;
main()
{
	test t;
	cout<<t.s;
	cout<<endl;
	t.x(80);
}
