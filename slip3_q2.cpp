#include<iostream>
#include<stdlib.h>

using namespace std;

class shape{
	public:
		virtual void area() = 0;
		
};

class circle:public shape{
	public:
		int radius;
		int a;
		
		void area()
		{
			cout<<"Enter radius of circle :- "<<endl;
			cin>>radius;
			
			a = 3.14 * radius *radius;
			
			cout<<"Area of circle :- "<<a<<endl;
			
			cout<<"\n";
		}
		 
};

class rectangle:public shape{
	public:
		int length;
		int breadth;
		int a;
		
		void area()
		{
			cout<<"Enter length of rectangle :- "<<endl;
			cin>>length;
			
			cout<<"Enter breadth of rectangle :- "<<endl;
			cin>>breadth;
			
			a = length * breadth;
			
			cout<<"Area of rectangle :- "<<a<<endl;
			
			cout<<"\n";
		}
};

class triangle:public shape{
	public:
		int base, heig;
		int a;
		
		void area()
		{
			cout<<"Enter base of triangle :- "<<endl;
			cin>>base;
			
			cout<<"Enter height of triangle :- "<<endl;
			cin>>heig;
			
			a = 0.5 * base * heig;
			
			cout<<"Area of trinangle :- "<<a<<endl;
			
			cout<<"\n";
			
		}
};

int main()
{
	int ch;
	circle c1;
	rectangle r1;
	triangle t1;
	
	while(1)
	{
		cout<<"1.Find area of Circle"<<endl;
		cout<<"2.Find area of Rectangle"<<endl;
		cout<<"3.Find area of Triangle"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your choise :- "<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1 : 
					c1.area();
					
					break;
			
			case 2:
					r1.area();
					
					break;
			
			case 3: 
					t1.area();
					
					break;
					
			case 4 :exit(0);
			
		}
	}
}
