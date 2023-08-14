#include<iostream>

using namespace std;

class learning_info{
	public:
		int roll_no;
		string name;
		string clas;
		float per;
};

class earning_info{
	public:
		int no_of_hours;
		int charges_per_h;
		int total;
		
		void total_earn()
		{
			total = no_of_hours * charges_per_h;
			
			cout<<"Total amount earned by student:"<<total<<endl;		
		}
};

class earn_learn_info:public learning_info ,public earning_info{
	
	public:
		
		void setter()
		{
			cout<<"Enter Roll No. of student:"<<endl;
			cin>>roll_no;
			
			cout<<"Enter Name of student:"<<endl;
			cin>>name;
			
			cout<<"Enter Class of student:"<<endl;
			cin>>clas;
			
			cout<<"Enter Percentage of student:"<<endl;
			cin>> per;
			
			cout<<"Enter Number of hours:"<<endl;
			cin>>no_of_hours;
			
			cout<<"Enter charges per hours:"<<endl;
			cin>>charges_per_h;
			
			cout<<"\n";
			
			cout<<"---------------------------------------------";
			
			cout<<"\n";
		}
		
		void getter()
		{
			
			cout<<"Roll NO :-"<<roll_no<<endl;
			
			cout<<"Name :-"<<name<<endl;
			
			cout<<"Class :-"<<clas<<endl;
			
			cout<<"Percentage :-"<<per<<endl;
			
			cout<<"Number of hours :-"<<no_of_hours<<endl;
			
			cout<<"Charges per hour :-"<<charges_per_h<<endl;
			
			total_earn();
			
			cout<<"\n";
		}
		
		
};

int main()
{
	int num,i;
	
	earn_learn_info e1[100];
	
	cout<<"How many data you want to enter:"<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		e1[i].setter();
	}
	
	for(i=1;i<=num;i++)
	{
		cout<<"----------------INFORMATION OF STUDENT"<< i <<"----------------";
		
		cout<<"\n";
		
		e1[i].getter();
	}
}
