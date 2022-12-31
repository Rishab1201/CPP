#include<iostream>

using namespace std;

int main()
{
	int num1,num2,num3;
	
	cout<<"Enter first number:";
	cin>>num1;
	
	cout<<"\n";
	
	cout<<"Enter second number:";
	cin>>num2;
	
	cout<<"\n";
	
	cout<<"Enter third number:";
	cin>>num3;
	
	cout<<"\n";
	
	if(num1>num2 && num1<num3)
	{
		cout<<num1<<"is between second and third number"<<endl;
	}
	else
	{
		cout<<"Not between second and third number"<<endl;
	}
}
