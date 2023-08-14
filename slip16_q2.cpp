#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class student{
	public:
		int s_id;
		string s_name;
		string clas;			

};

class compi{
	public:
		int c_id;
		string c_name;

};

class stu_comp:public student ,public compi{
	public:
		int rank;
		
		int accept()
		{
			cout<<"Enter student id :- "<<endl;
			cin>>s_id;
		
			cout<<"Enter student name :- "<<endl;
			cin>>s_name;
		
			cout<<"Enter student class :- "<<endl;
			cin>>clas;
			
			cout<<"Enter competition id :- "<<endl;
			cin>>c_id;
		
			cout<<"Enter competition Name :- "<<endl;
			cin>>c_name;
		
			cout<<"Enter Rank :- "<<endl;
			cin>>rank;
		}
		
		void display()
		{
			cout<<"-----------------------STUDENT DETAILS---------------------"<<endl;
			
			cout<<"\n";
			
			cout<<"Id of student :- "<<s_id<<endl;
			
			cout<<"Name of studetn :- "<<s_name<<endl;
			
			cout<<"Class of student :- "<<clas<<endl;
			
			cout<<"-----------------------COMPETITION DETAILS------------------"<<endl;
			
			cout<<"\n";
			
			cout<<"Competition id :- "<<c_id<<endl;
			cout<<"Competition Name :- "<<c_name<<endl;
			
			cout<<"Rank of student :- "<<rank<<endl;
			
			cout<<"\n";
			
			cout<<"-------------------------------------------------------------"<<endl;
			
			cout<<"\n";
			
			
		}
};

int main()
{
	stu_comp sc1[100];
	stu_comp temp;
	
	int i,ch,num,j;
	
	cout<<"How many data you want to enter :- "<<endl;
	cin>>num;
	
	for(i=0;i<num;i++)
	{
		sc1[i].accept();
		cout<<"\n";
	}
	
	while(1)
	{
		cout<<"1. Display information of studetn."<<endl;
		cout<<"2.Display student details in acending order of rank of a specified competition."<<endl;
		cout<<"3.Exit";
		cout<<"\n";
		
		cout<<"Enter your choise :- "<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1 : for(i=0;i<num;i++)
					{
						sc1[i].display();
					}
					
					break;
				
			case 2 : // bubble sort
					
					for(i=0;i<num;i++)
					{
						for(j=i+1;j<num;j++)
						{
							if(sc1[i].rank>sc1[j].rank)
							{
								temp = sc1[j];
								sc1[j] = sc1[i];
								sc1[i] = temp;	
							}	
						}
					}
					
					for(i=0;i<num;i++)
					{
						sc1[i].display();
					}
			
					break;
					
			case 3 : exit(0);
					
		}
	}
	
	
}
