#include<iostream>
#include<cstdlib>

using namespace std;


class book{
	static int noofbooks;
	
	private:
		string title;
		int noofauth;
		int ISBN;
		int price;
		int noofcopies;
	
	public:
		void setter()
		{
			cout<<"Enter title of book:"<<endl;
			cin>>title;
			
			cout<<"Enter number of authors:"<<endl;
			cin>>noofauth;
			
			cout<<"Enter price of Book:"<<endl;
			cin>>price;
			
			cout<<"Enter number of copies:"<<endl;
			cin>>noofcopies;
		}
	
	void display();
	
	int isbn()
	{
		int random = rand();
		
		cout<<"ISBN number of BOOK:"<<random<<endl;
		
		cout<<"\n";
	}
	
};

int book::noofbooks=0;

void book::display()
{
	cout<<"BOOK TITLE:"<<title<<endl;
	
	cout<<"NO OF AUTHORS:"<<noofauth<<endl;
	
	cout<<"PRICE OF BOOK:"<<price<<endl;
	
	cout<<"NUMBER OF COPIES:"<<noofcopies<<endl;
	
	noofbooks++;
	
	cout<<"NUMBER OF BOOKS:"<<noofbooks<<endl;
}

int main()
{
	int num;
	book b[100];
	
	cout<<"How many book you want to search:"<<endl;
	cin>>num;
	
	for(int i=0;i<num;i++)
	{
		b[i].setter();
	}
	
	cout<<"-----------------INFORMATION OF BOOKS--------------"<<endl;
	
	cout<<"\n";
	
	for(int i=0;i<num;i++)
	{
		b[i].display();
		b[i].isbn();
	}
	
		
}
