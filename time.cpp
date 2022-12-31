#include<iostream>

using namespace std;

int main()
{
	int min,sec,hr;
	int rem,r,re,remi;
	int h=0,m=0,s=0,temp=0;
	
	cout<<"Enter second:";
	cin>>sec;
	
	cout<<"\n";
	
	cout<<"Enter minutes:";
	cin>>min;
	
	cout<<"\n";
	
	cout<<"Enter hours:";
	cin>>hr;
	
	cout<<"\n";
	
	if(sec>60)
	{
		rem = sec % 60;
		s = s + rem;
		s + min;
		cout<<min<<endl;
		cout<<s;
		cout<<"\n";
	}
	if(min>60)
	{
		r = min % 60;
		m = m + r;
		
		hr = hr + m;
		cout<<m<<endl;
		cout<<hr;
		cout<<"\n";
	}
	if(hr>12)
	{
		remi = hr % 12;
		cout<<remi;
	}
	
	
}
