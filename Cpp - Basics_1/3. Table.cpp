#include<iostream>
using namespace std;
class table
{
	int x, y, z;
	
	public:
		void tab();
};

void table::tab()
{
	int i, j;
	cout<<"Enter the no.: ";
	cin>>x;
	cout<<"How many times do you want to print the table: ";
	cin>>z;
	cout<<endl;
	for (j=1; j<=z; j++)
	{
		
		for(i=1; i<=10; i++)
			{
				y=x*i;
				cout<<x<<" X "<<i<<" = "<<y<<endl;
			}
			cout<<endl;
	}
}
main()
{
	table t;
	t.tab();
}
