#include<iostream>


int average(int a,int b,int c)
{
	int avg = a + b + c / 3;
	
	std::cout<<"Average of integer numbers :: "<<avg<<std::endl;
	std::cout<<"\n";
}

float average(float a,float b,float c)
{
	float avg1 = a + b + c / 3;
	
	std::cout<<"Average of Float number :: "<<avg1<<std::endl;
	std::cout<<"\n";
}

int main(){
	int a,b,c;
	float x,y,z;
	
	std::cout<<"Enter 3 Integer Numbers :: "<<std::endl;
	std::cin>>a>>b>>c;
	
	average(a,b,c);
	
	std::cout<<"Enter 3 Float Numbers :: "<<std::endl;
	std::cin>>x>>y>>z;
	
	average(x,y,z);
}
