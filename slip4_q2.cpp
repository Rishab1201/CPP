#include<iostream>
#include<stdio.h>

using namespace std;

class employee{
	public:
		int empcode;
		string name;
		int salary;
	
	void setter(){
		cout<<"Enter Employee code of employee : "<<endl;
		cin>>empcode;
		
		cout<<"Enter name of employee : "<<endl;
		cin>>name;
	}
};

class fulltime:public employee{
	
	public:
		int daily_wages;
		int noofdays;
		void accept(){
			setter();
			
			cout<<"Enter daily wages :- "<<endl;
			cin>>daily_wages;
			
			cout<<"Enter number of days :- "<<endl;
			cin>>noofdays;
			
		}
		
		void calc(){
			salary = noofdays * daily_wages;
		}
		
		void display(){
			
			cout<<"----------------------Full Time Employee Data--------------------------\n"<<endl;
			cout<<"Employee code :- "<<empcode<<endl;
			cout<<"Name of Employee :- "<<name<<endl;
			cout<<"Salary of Employee :- "<<salary<<endl;
			
			cout<<"\n";
		}
		
};

class parttime:public employee{
	public:
		int noofworkings;
		int wages;
		
		void accept1(){
			setter();
			
			cout<<"Enter number of working hours :- "<<endl;
			cin>>noofworkings;
			
			cout<<"Enter wages :- "<<endl;
			cin>>wages;
		}
		
		void calc1(){
			salary = noofworkings * wages;
		}
		
		void display1(){
			
			cout<<"----------------------Full Time Employee Data--------------------------\n"<<endl;
			
			cout<<"Employee code :- "<<empcode<<endl;
			cout<<"Name of Employee :- "<<name<<endl;
			cout<<"Salary of Employee :- "<<salary<<endl;
			
			cout<<"\n";
		}
};


int main(){
	fulltime f1[10];
	parttime p1[10];
	int a[10];
	int ch,i,max_full=0,max_part=0;
	
	while(1){
		cout<<"1.Full time employee data"<<endl;
		cout<<"2.Part time employee data"<<endl;
		cout<<"3.Display the details of employee having maximum salary for both types of employees."<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your choise :- "<<endl;
		cin>>ch;
		
		switch(ch){
			case 1:
				int n;
				cout<<"How many data you want enter :- "<<endl;
				cin>>n;
				
				for(i=0;i<n;i++){
					f1[i].accept();
					f1[i].calc();
				}
				
				for(i=0;i<n;i++){
					f1[i].display();
				}
			
			break;
			
			case 2:
				int num;
				
				cout<<"How many data you want to enter :- "<<endl;
				cin>>num;
				
				for(i=0;i<num;i++){
					p1[i].accept1();
					p1[i].calc1();
				}
				
				for(i=0;i<num;i++){
					p1[i].display1();
				}
				
			break;
			
			case 3:
				cout<<"------------------Maximum salary of full time employee---------------"<<endl;
				cout<<"\n";
				
				for(i=0;i<n;i++){
					a[i]=f1[i].salary;
				}
				for(i=0;i<n;i++){
					if(a[i]>max_full){
						max_full=a[i];
						f1[i].display();
					}
				}
				cout<<"------------------Maximum salary of Part time employee---------------"<<endl;
				cout<<"\n";
				
				for(i=0;i<num;i++){
					a[i]=p1[i].salary;
				}
				
				for(i=0;i<num;i++)
				{
					if(a[i]>max_part){
						max_part=a[i];
						p1[i].display1();
					}
				}
				
			break;
			
			case 4:
				exit(0);
				break;
		}
		
	}
	
}
