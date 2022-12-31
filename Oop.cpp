#include<iostream>

using namespace std;

class demo{
	// access specifier (public,private,protected)
	
	public:
		int a;
		string str;
		float b;
		
	//function or method
	
	void display();
//	{
//		cout<<"hello";
//	}
};

void demo::display()//outside function
{
	cout<<"hello from outside function";
}

int main()
{
	demo d1;
	
	d1.a = 1;
	d1.str = "hello rishab";
	d1.b = 0.1;
	
	cout<<d1.a <<d1.str <<d1.b<<endl;
	
	d1.display();	
	
}
