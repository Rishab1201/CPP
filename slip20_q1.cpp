#include<iostream>
#include<stdio.h>

using namespace std;
class employee{
	
	public:
		int empId;
		string e_name;
		string c_name;
		int salary;
		char a[7];
		
		void setter(){
			cout<<"Enter id of employee :- "<<endl;
			cin>>empId;
			
			cout<<"Enter name of employee :- "<<endl;
			cin>>e_name;
			
			cout<<"Enter name of company :- "<<endl;
			cin>>c_name;
			
			cout<<"Enter salary of employee :- "<<endl;
			cin>>salary;
		}
		
		void calc(){
			
			int rem,i;
			
			for(i=6;i>=0;i--){
				rem = salary % 10;
				if(salary>0){
					a[i] = rem + 48;
				}
				else{
					a[i] = '*';
				}
				salary = salary / 10;
			}
			
		}
		
		void display(){
			int i;
			cout<<"----------------------Employee data-----------------\n"<<endl;
			
			cout<<"id of employee :- "<<empId<<endl;
			cout<<"Name of emoloyee :- "<<e_name<<endl;
			cout<<"Company name :- "<<c_name<<endl;
			cout<<"Salary of employee :- "<<endl;
			
			for(i=0;i<7;i++){
				
				cout<<a[i];
			}
		}
};

int main(){
	employee e1;
	
	e1.setter();
	e1.calc();
	e1.display();
}
