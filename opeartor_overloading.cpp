#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;


class add{
	public:
int x,y,result=0;
add()
{
	x=0;
	y=0;
}	
void set_data(int a,int b)
{
	x=a;
	y=b;
}
void display()
{
	cout<<"result="<<result;
}
void operator +(add &ob)
{
	x=x+ob.x;
	y=y+ob.y;
	display();
}
};

int main()
{
add a1,b1;
a1.set_data(10,20);
b1.set_data(30,40);
a1+b1;
}
