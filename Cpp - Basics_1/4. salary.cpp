#include<iostream>
using namespace std;
class salary
{	int s, hra, da, tf, n;

	public:
		void calc();
};
void salary::calc()
{	
 	cout<<"Enter the salary of the employee: ";
	cin>>s;
	
	hra=s*10/100;
	da=s*15/100;
	tf=s*20/100;
	
	n=s+hra+da-tf;
	cout<<"The net salary is: "<<n; 	
}
main()
{
	salary S;
	S.calc();
}

