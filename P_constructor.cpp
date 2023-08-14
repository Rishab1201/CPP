# include<stdio.h>
#include<iostream>

using namespace std;

class student {
	int s_name;
	
	public:
		student(int n)
		{
			s_name = n;
			cout<<"My name is "<<s_name<<endl;

		}
};

int main()
{
	int n;
	
	cout<<"Enter your name :- "<<endl;
	cin>>n;
	
	student n1(int n);
}
