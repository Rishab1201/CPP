#include<iostream>

using namespace std;

class student{
	
	int roll;
	
	public:
		string name;
		
	void accept(){
		cout<<"Enter name of student : "<<endl;
		cin>>name;
		
		cout<<"Enter Roll Number of student : "<<endl;
		cin>>roll;
		cout<<"\n";
	}
	
	void display2(){
		cout<<"Name of student : "<<name<<endl;
		cout<<"Roll Number of student : "<<roll<<endl;
	}
};

class theory:protected student{
	protected:
	int m1,m2,m3,m4;
};

class practical:protected student{
	protected:
	int p1,p2;
		
};

class result:protected theory , protected practical{
	int total;
	int per;
	string grade;
	
	public:
		void setter(){
						
			cout<<"Enter mark 1 : "<<endl;
			cin>>m1;
			cout<<"Enter mark 2 : "<<endl;
			cin>>m2;
			cout<<"Enter mark 3 : "<<endl;
			cin>>m3;
			cout<<"Enter mark 4 : "<<endl;
			cin>>m4;
			
			cout<<"\n";
		}
		
		void setter1(){
			cout<<"Enter Practical 1 : "<<endl;	
			cin>>p1;
					
			cout<<"Enter Practical 2 : "<<endl;			
			cin>>p2;
			
			cout<<"\n";	
		}
		
		void cal(){
			total = m1 + m2 + m3 + m4 + p1 + p2;
			
			per = total * 100 / 600;
			
		}
		
		void display1(){
			cout<<"\n";
			
			cout<<"Mark 1 of student : "<<m1<<endl;
			cout<<"Mark 2 of student : "<<m2<<endl;
			cout<<"Mark 3 of student : "<<m3<<endl;
			cout<<"Mark 4 of student : "<<m4<<endl;
			cout<<"Practical 1 of student : "<<p1<<endl;
			cout<<"Practical 2 of student : "<<p2<<endl;
			
			cout<<"\n";
		}
		
		void display(){
			
			cout<<"\n";
			
			cout<<"Total Marks of student : "<<total<<endl;
			cout<<"Percentage of student : "<<per<<endl;
			
			if(per<100 && per>=90){
				cout<<"Grade O"<<endl;
			}
			else if(per<90 && per>=80){
				cout<<"Grade A+"<<endl;
			}
			else if(per<80 && per>=70){
				cout<<"Grade A+"<<endl;
			}
			else if(per<70 && per>=60){
				cout<<"Grade A"<<endl;
			}
			else if(per<60 && per>=40){
				cout<<"Grade B"<<endl;
			}
			else{
				cout<<"Fail"<<endl;
			}
			cout<<"\n";
		}
};

int main(){
	
	student s[10];
	result r[10];
	int i,n,ch;
	
	cout<<"How many values you want to enter : "<<endl;
	cin>>n;
	
	while(1){
		
		cout<<"1 Accept Student Information "<<endl;
		cout<<"2 Display Student Information"<<endl;
		cout<<"3 Calculate Total Marks ,percentage and Grade"<<endl;
		cout<<"4 Exit"<<endl;
		cout<<"Enter your Choise : "<<endl;
		cin>>ch;
		
		switch(ch){
			case 1 :
					for(i=0;i<n;i++){
						s[i].accept();
						r[i].setter();
						r[i].setter1();
					}
					
				break;
			
			case 2 :
					
					for(i=0;i<n;i++){
						cout<<"----------------------------STUDENT INFORMATION "<<i+1<<"----------------------------"<<endl;
						cout<<"\n";
						s[i].display2();
						r[i].display1();
					}
					
				break;
				
			case 3:
				
					for(i=0;i<n;i++){
						cout<<"----------------------------RESULT OF "<<s[i].name<<" ----------------------------"<<endl;
						cout<<"\n";
						r[i].cal();
						r[i].display();
					}
				
			case 4 : exit(0);
		}
		
	}
	
}

