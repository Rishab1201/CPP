#include<iostream>

using namespace std;

class account{
	
	int a_no;
	string a_type;
	int balance;
	
	public:
		void setter(){
			cout<<"\n";
			
			cout<<"Enter Account Number : "<<endl;
			cin>>a_no;
			
			cout<<"Enter Account Type : "<<endl;
			cin>>a_type;
			
			cout<<"Enter Balance : "<<endl;
			cin>>balance;
			
			cout<<"\n";
		}
		
		void getter(){
			cout<<"\n";
			
			cout<<"Account Number : "<<a_no<<endl;
			
			cout<<"Account Type : "<<a_type<<endl;
			
			cout<<"Account Balance : "<<balance<<endl;
			
			cout<<"\n";
		}
};

int main(){
	
	int n,i;
	
	cout<<"Enter number of accounts : "<<endl;
	cin>>n;
	
	account *arr = new account[n];
	
	for(i=0;i<n;i++){
		
		arr[i].setter();
	}
	
	for(i=0;i<n;i++){
		cout<<"----------------------ACCOUNT DETAIL "<<i+1<<"-----------------"<<endl;
		arr[i].getter();
	}

}
