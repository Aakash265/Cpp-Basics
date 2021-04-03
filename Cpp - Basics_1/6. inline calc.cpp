#include<iostream>
using namespace std;
class calculator
{
	float a, b, c;
	 public:
	 	void add();
	 	void sub();
	 	void multiply();
	 	void divide();
	 
};
	inline void calculator::add()
	 	{
	 		cout<<"Enter the numbers: ";
	 		cin>>a>>b;
	 		c=a+b;
	 		cout<<"The sum is: "<<c;
		}
	inline void calculator::sub()
		{
			cout<<"Enter the numbers: ";
	 		cin>>a>>b;
	 		c=a-b;
	 		cout<<"The difference is: "<<c;
		}
	inline void calculator::multiply()
		{
		 	cout<<"Enter the numbers: ";
	 		cin>>a>>b;
	 		c=a*b;
	 		cout<<"The product is: "<<c;	
		}
	inline void calculator::divide()
		{
			cout<<"Enter the numbers: ";
	 		cin>>a>>b;
	 		c=a/b;
	 		cout<<"The quotient is: "<<c;
		}
main()
{   
 	calculator obj;
	int x, i;
	 cout<<"Which function you want to perform:\n";
	 cout<<"1. Addition \n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
	  for(i=1; i>0; i++)
		{
			cout<<"\nEnter your choice: ";
			cin>>x;
	
			switch(x)
			{
				case 1:
					obj.add();
					break;
				case 2:
					obj.sub();
					break;
				case 3:
					obj.multiply();
					break;
				case 4:
					obj.divide();
					break;
				case 5:
					return(0);
				default:
			 		cout<<"Wrong choice";				
			}
		}
}
