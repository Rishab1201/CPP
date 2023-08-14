#include<iostream>

using namespace std;

class student{
	public:
		int roll;
		string name;
		string clas;
		int per;
		
		void setter(){
			cout<<"Enter roll no : "<<endl;
			cin>>this->roll;
			
			cout<<"Enter Name : "<<endl;
			cin>>this->name;
			
			cout<<"Enter class : "<<endl;
			cin>>this->clas;
			
			cout<<"Enter Percentage : "<<endl;
			cin>>this->per;
			
			cout<<"\n";
		}
		
		void display(){
			cout<<"Roll No : "<<roll<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Class : "<<clas<<endl;
			cout<<"Percentage : "<<per<<endl;
			
			cout<<"\n";
		}
		
		
};

int main(){
	student s[30];
	int n,i,max = 0,inc=0;
	
	cout<<"How many values you want to enter : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		s[i].setter();
	}
	
//	for(i=0;i<n;i++){
//		s[i].display();
//	}
	
	for(i=0;i<n;i++){
		if(s[i].per>max){
			max=s[i].per;
			inc = i;
		}
	}
	
	cout<<"Maximum : "<<endl;
	
	s[inc].display();
}
