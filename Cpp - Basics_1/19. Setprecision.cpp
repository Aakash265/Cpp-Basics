#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	float x=12.4567;
	cout<<"After setprecision: "<<endl;
	cout<<setprecision(1)<<x<<endl;
	cout<<setprecision(3)<<x<<endl;
	cout<<setprecision(4)<<x<<endl;
	cout<<setprecision(5)<<x<<endl;
	cout<<setprecision(6)<<x<<endl;
	cout<<setprecision(7)<<x<<endl;
	cout<<setprecision(8)<<x<<endl;
	
	cout<<"Left padded values: "<<endl;
	cout<<setw(7)<<setfill('0')<<setprecision(3)<<x<<endl;
}
