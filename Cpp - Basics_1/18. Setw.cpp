#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	char subject[4][25]={"English", "Computer", "Maths", "Electronics"};
	int marks[4]={95, 96, 89, 85};
	int i;
	
	cout<<setw(20)<<"Subject Name"<<setw(40)<<"Marks"<<endl;
	for(i=0; i<=3; i++)
	{
		cout<<setw(20)<<subject[i]<<setw(40)<<marks[i]<<endl;
	}
	
	cout<<endl;
	
		for(i=0; i<=3; i++)
	{
		cout<<setfill('$')<<setw(20)<<subject[i]<<setw(40)<<setfill('-')<<marks[i]<<endl;
	}
}
