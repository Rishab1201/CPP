#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class person{
	public:
	char p_name[30];
	int p_no;
	int age;
	char city[30];
	
	public:
	void setter(){
		
		cout<<"Enter Name of person --> "<<endl;
		cin>>p_name;
		
		cout<<"Enter Mobile number of person --> "<<endl;
		cin>>p_no;
		
		cout<<"Enter Age of the person --> "<<endl;
		cin>>age;
		
		cout<<"Enter the name of city --> "<<endl;
		cin>>city;
		
		cout<<"\n";
	}
	
	int search(char name[]){
		
		if(strcmp(p_name,name) == 0){
			return 1;
		}
		else{
			return 0;
		}
		
	}
	
	int serach(int no){
		if(p_no == no){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	void search(){

				cout<<"The Person name is : "<<p_name<<endl;
				cout<<"The Person Mobile number is : "<<p_no<<endl;
				cout<<"The person Age is : "<<age<<endl;
				cout<<"city name is : "<<city<<endl;
				
				cout<<"\n";
						
	}
};

int main(){
	
	person p[30];
	char name[30];
	char c_name[30];
	int no,i,ch,n,flag = 0,flag1 = 0;
	
	cout<<"how many values do you want to enter : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		p[i].setter();
	}
	
	while(1){
		cout<<"1 Search the mobile number of given Person."<<endl;
		cout<<"2 Search the Person name of given mobile number."<<endl;
		cout<<"3 Search all person details of given city."<<endl;
		cout<<"4 Exit"<<endl;
		cout<<"Enter your choise : "<<endl;
		cin>>ch;
		
		flag = 1,flag = 0;
		
		switch(ch){
			case 1 : cout<<"Enter Name of person : "<<endl;
					cin>>name;
					
					 
					for(i=0;i<n;i++){
						
						int val1 = p[i].search(name);
						 
						if(val1 == 1){
							flag = 1;
							cout<<"The person phone number is : "<<p[i].p_no<<endl;
						}
					}
					if(flag == 0){
						cout<<"NO RECORD FOUND"<<endl;
						cout<<"\n";
					}
					
				break;
				
			case 2 : cout<<"Enter mobile number of person : "<<endl;
					cin>>no;
					
					
					for(i=0;i<n;i++){
					
						int val = p[i].serach(no);
						if(val == 1){
							cout<<"The preson name is : "<<p[i].p_name<<endl;	
						}
						else{
							flag = 0;
						}
						
						
					}
					
					if(flag == 0){
						cout<<"NO RECORD FOUND"<<endl;
					}
					
				break;
			
			case 3 : cout<<"Enter city name : "<<endl;
					cin>>c_name; 
			
					for(i=0;i<n;i++){
						if(strcmp(p[i].city,c_name) == 0){
							p[i].search();
						}
					}
					break;
					
			case 4 : exit(0);
				
		}
	}
		
}
