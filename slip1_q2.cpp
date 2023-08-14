//B) Create a base class Account (Acc_Holder_Name, Acc_Holder_Contact_No). Derive a two classes as Saving_Account(S_Acc_No., Balance)
// and Current_Account( C_Acc_No., Balance) from Account. 
//Write a C++ menu driven program to perform following functions:
//i.Accept the details for ‘n’ account holders.
//ii.Display the details of ‘n’ account holders by adding interest amount where interest rate for 
//Saving account is 5% of balance and interest rate for Current account is 1.5% of   balance. 

#include<iostream>
#include<stdio.h>

using namespace std;

class account{
	public:
		string AHN;
		double AHC;
	
	public:
		void setter(){
			cout<<"Enter Account Holder Name :- "<<endl;
			cin>>AHN;
			
			cout<<"Enter Account Holder Contact Number :- "<<endl;
			cin>>AHC;
		}
};

class saving_account:public account{
	
	int s_no;
	int balance;
	
	public:
		void s_setter(){
			account::setter();
			cout<<"Enter savings account number :- "<<endl;
			cin>>s_no;
			
			cout<<"Enter Balance of account number :- "<<endl;
			cin>>balance;
		}
		
		void s_getter(){
			
			float interest;
			
			interest = balance + (balance * 5 /100);
			
			cout<<"--------------------Savings Account Holder Details----------------------"<<endl;
			cout<<"\n";
			
			cout<<"Account Holder Name :- "<<AHN<<endl;
			cout<<"Account Holder Contact Number :- "<<AHC<<endl;
			cout<<"Balance of Account Holder :- "<<balance<<endl;
			cout<<"Interest on balance :- "<<interest<<endl;
			
			cout<<"\n";
		}
};

class current_account:public account{
	
	int c_no;
	int Balance;
	
	public:
		void c_setter(){
		
			account::setter();	
			
			cout<<"Enter current account number :- "<<endl;
			cin>>c_no;
			
			cout<<"Enter balance of current account number :- "<<endl;
			cin>>Balance;	
		}
		
		void c_getter(){
			
			float Interest,Inte;
			
			Interest =Balance + (Balance * 1.5 / 100);
			
			cout<<"--------------------------Current Account Holder Details-----------------------"<<endl;
			cout<<"\n";
			
			cout<<"Account Holder Name :- "<<AHN<<endl;
			cout<<"Account Holder Contact Number :- "<<AHC<<endl;
			cout<<"Balance of Account Holder :- "<<Balance<<endl;
			cout<<"Interest on balance :- "<<Interest<<endl;
			
			cout<<"\n";
		}
	
	
};

int main(){
	
	int n,i,cs;
	
	saving_account s1[10];
	current_account c1[10];
	
	cout<<"How many values you want to enter :-"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{	
		cout<<"1.savings account"<<endl;
		cout<<"2.current account"<<endl;
		cin>>cs;
		
		if(cs == 1){
			s1[i].s_setter();
			s1[i].s_getter();
		}
		else{
			c1[i].c_setter();
			c1[i].c_getter();
		}
	}
	
	
}
