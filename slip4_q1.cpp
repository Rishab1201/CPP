#include<iostream>
#include<stdio.h>

using namespace std;
class worker{
	
	string w_name;
	int noofhours;
	int sala;
	
	public:
		void setter(){
			cout<<"Enter worker Name :- "<<endl;
			cin>>w_name;
			cout<<"Enter Number of hours worked :- "<<endl;
			cin>>noofhours;
		}
		
		void calc(){
			const int pay_rate = 500;
			sala = noofhours * pay_rate;
		}
		
		void display(){
			cout<<"----------------worker details---------------\n"<<endl;
			
			cout<<"Name of worker :- "<<w_name<<endl;
			cout<<"Number of hours worked :- "<<noofhours<<endl;
			cout<<"Salary of worker :-"<<sala<<endl;
		}
};

int main(){
	worker w1[10];
	int n,i;
	
	cout<<"How many details you want to enter :- "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		w1[i].setter();
		w1[i].calc();
		w1[i].display();
	}
}
