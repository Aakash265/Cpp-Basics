#include<iostream>
using namespace std;
class account
{
	int acc;
	double bal;
	static double rate;
	
	public:
		void read();
		void show();
		void rate_calc();
};

void account::read()
{
	cout<<"Enter account no and balance: ";
	cin>>acc>>bal;
}

void account::show()
{
	cout<<"\n Account no. :"<<acc<<"\t";
	cout<<"Interest :"<<rate<<"\t";
	cout<<"Balance :"<<bal<<"\n";
}

void account::rate_calc()
{
	double interest =(bal*rate*0.25);
	bal=bal+interest;
}

double account::rate=0.05;
main()
{
	account a1, a2;
	cout<<"Enter customer 1 info: "<<"\n";
	a1.read();
	cout<<"Enter customer 2 info :"<<"\n";
	a2.read();
	a1.rate_calc();
	a2.rate_calc();
	a1.show();
	a2.show();
}

