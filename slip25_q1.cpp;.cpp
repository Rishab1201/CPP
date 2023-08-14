#include<iostream>
#include<iomanip>

using namespace std;

inline void function(float a,float b)
{
	float c;
	
	c = a + b;
	
	cout<<"Sum of Float number :: "<<setprecision(2)<<c<<endl;
	
	c = a - b;
	
	cout<<"Subtraction of Float number :: "<<setprecision(2)<<c<<endl;
	
	c = a * b;
	
	cout<<"Multiplication of Float number :: "<<setprecision(2)<<c<<endl;
	
	c = a / b;
	
	cout<<"Division of Float number :: "<<setprecision(2)<<c<<endl;
}

int main(){
	float a,b;
	
	cout<<"Enter value of A and B :: "<<endl;
	cin>>a>>b;
	
	function(a,b);
}
