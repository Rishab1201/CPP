#include<iostream>

using namespace std;

int main()
{
	int mon,year;
	
	cout<<"Enter month:"<<endl;
	cin>>mon;
	
	cout<<"Enter year:"<<endl;
	cin>>year;
	
	cout<<"\n";
	
	if(mon>12)
	{
		cout<<"Error--Month is incorrect"<<endl;
	}
	else
	{
		cout<<"Month- "<<mon<<endl;
		cout<<"Year- "<<year<<endl;
		
		cout<<"\n";
	}
	
	switch(mon)
	{
		case 1:cout<<"January"<<endl;
				cout<<"Days- 31"<<endl;
				
				break;
		
		case 2:if(year % 4 == 0)
				{
				  	cout<<"February"<<endl;
					cout<<"Days- 29";
				}
				else
				{
					cout<<"February"<<endl;
					cout<<"Days- 28";
				}
				
				break;
				
		case 3:cout<<"March"<<endl;
				cout<<"Days- 31";
				
				break;
				
		case 4:cout<<"April"<<endl;
				cout<<"Days- 30"<<endl;
				
				break;
				
		case 5:cout<<"May"<<endl;
				cout<<"Days- 31"<<endl;
				
				break;
				
		case 6:cout<<"June"<<endl;
				cout<<"Days- 30"<<endl;
				
				break;
				
		case 7:cout<<"July"<<endl;
				cout<<"Days- 31"<<endl;
				
				break;
				
		case 8:cout<<"August"<<endl;
				cout<<"Days- 31"<<endl;
				
				break;
				
		case 9:cout<<"September"<<endl;
				cout<<"Days- 30"<<endl;
				
				break;
				
		case 10:cout<<"October"<<endl;
				cout<<"Days- 31"<<endl;
				
				break;
				
		case 11:cout<<"November"<<endl;
				cout<<"Days- 30"<<endl;
				
				break;
		
		case 12:cout<<"December"<<endl;
				cout<<"Days- 31"<<endl;
				
				break;
	}
	
}
