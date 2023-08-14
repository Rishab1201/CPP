#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class college{
	private:
		int c_id;
		string c_name;
		int e_year;
		char u_name[10];
		
	public:
		
		void setter(){
			cout<<"\n";
			
			cout<<"Enter College Id : "<<endl;
			cin>>c_id;
			
			cout<<"Enter College Name : "<<endl;
			cin>>c_name;
			
			cout<<"Enter Establishment Year : "<<endl;
			cin>>e_year;
			
			cout<<"Enter University Name : "<<endl;
			cin>>u_name;
			
			cout<<"\n";
		}
		
		void display(){
			cout<<"\n";
			
			cout<<"College Id : "<<c_id<<endl;
			cout<<"College Name : "<<c_name<<endl;
			cout<<"Establishment Year : "<<e_year<<endl;
			cout<<"Univercity name : "<<u_name<<endl;
			
			cout<<"\n";
		}
		
		void display(char uname[]){
			cout<<"\n";
			
			if(strcmp(u_name,uname) == 0){
				cout<<"College Id : "<<c_id<<endl;
				cout<<"College Name : "<<c_name<<endl;
				cout<<"Establishment Year : "<<e_year<<endl;
				cout<<"Univercity name : "<<u_name<<endl;	
			}
			
			cout<<"\n";
			
		}
		
		void display(int eyear){
			cout<<"\n";
			
			if(eyear == e_year){
				cout<<"College Id : "<<c_id<<endl;
				cout<<"College Name : "<<c_name<<endl;
				cout<<"Establishment Year : "<<e_year<<endl;
				cout<<"Univercity name : "<<u_name<<endl;
			}
			
			cout<<"\n";
		}
};

int main(){
	int eyear,n,ch,i,flag = 0;
	char uname[10];
	
	college c[20];
	
	
	cout<<"Enter number of college : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"------------------------- ENTER DETAILS OF COLLEGE "<<i+1<<"---------------------"<<endl;
		cout<<"\n";
		c[i].setter();
	}
	
	while(1){
		cout<<"1 DISPLAY DETAILS OF ALL COLLEGE "<<endl;
		cout<<"2 DISPLAY DETAILS OF A SPECIFIED UNIVERSITY"<<endl;
		cout<<"3 DISPLAY COLLEGE DETAILS ACCORDING TO SPECIFIED ESTABLISHMENT YEAR "<<endl;
		cout<<"4 EXIT"<<endl;
		cout<<"\n";
		cout<<"ENTER YOUR CHOISE : "<<endl;
		cin>>ch;
		
		switch(ch){
			case 1 :
					
					for(i=0;i<n;i++){
						cout<<"--------------------- DETAILS OF COLLEGE "<<i+1<<"-----------------------"<<endl;
						cout<<"\n";
						
						c[i].display();
					}
				break;
			
			case 2:
					cout<<"\n";
					
					cout<<"Enter name of University : "<<endl;
					cin>>uname;
					
					for(i=0;i<n;i++){
						c[i].display(uname);
					}
				break;
				
			case 3:
					cout<<"\n";
					
					cout<<"Enter Establishment Year : "<<endl;
					cin>>eyear;
					
					for(i=0;i<n;i++){
						
						c[i].display(eyear);		
					}	
			
			case 4:
					exit(0);
		}
	}
}
