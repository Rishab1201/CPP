#include<iostream>

using namespace std;

int main()
{
	string ch,arr[10];
	int i;
	
	cout<<"Enter a string:"<<endl;
	cin>>ch;
	
	const char str = ch.c_str();
	
	cout<<"["<<str<<"]";
}
