#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int a,b,i;
	
	cout<<"Enter two numbers:"<<endl;
	
	cin>>a>>b;
	
	b = b + a;
	
	a = b - a;
	cout<<"A-->"<<a<<endl;
	
	b = b - a;
	cout<<"B-->"<<b<<endl;
	
}
