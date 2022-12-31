#include<iostream>

using namespace std;

int main()
{
	int num;
	
	cout<<"Enter number:"<<endl;
	cin>>num;
	
	cout<<"\n";
	
	if(num%5==0 && num%7==0)
	{
		cout<<"the number is divisible by 5 and 7"<<endl;
	}
	else if(num%5==0)
	{
		cout<<"The number is divisible by 5"<<endl;
	}
	else if(num%7==0)
	{
		cout<<"The number is divisible by 7"<<endl;
	}
	else
	{
		cout<<"Not divisible by both number"<<endl;
	}
}
