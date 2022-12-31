#include<iostream>

using namespace std;

int add(int a,int b)
{
	return a + b;
}

int add(float a,float b,int c)
{
	return a + b + c;
}

int main()
{
	int val;
	val = add(2,4,9);
	
	cout<<val<<endl;
	
	cout<<add(3.14,2.1,6);
}


