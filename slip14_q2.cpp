#include<iostream>

using namespace std;

class seller{
	public:
		string s_name;
		string p_name;
		int s_qty;
		int t_qty;
		int mm;
		int com;
		
		void setter(){
			cout<<"\n";
			
			cout<<"Enter Name of salesman : "<<endl;
			cin>>s_name;
			
			cout<<"Enter product name : "<<endl;
			cin>>p_name;
			
			cout<<"Enter sales Quantity : "<<endl;
			cin>>s_qty;
			
			cout<<"Enter Target Quantity : "<<endl;
			cin>>t_qty;
			
			cout<<"Enter Month : "<<endl;
			cin>>mm;
			
			com = 0;
			
			cout<<"\n";
		}
		
		void getter(){
			cout<<"\n";
			
			cout<<"Name of salesman : "<<s_name<<endl;
			
			cout<<"Product Name : "<<p_name<<endl;
			
			cout<<"Sales Quantity : "<<s_qty<<endl;
			
			cout<<"Target Quantity : "<<t_qty<<endl;
			
			cout<<"Month : "<<mm<<endl;
			
		}
		
		void calc(){
			int temp;
			
			if(s_qty>t_qty){
				
				temp = s_qty - t_qty;
				
				com = temp * 0.25 + 0.10 * t_qty;
				
				cout<<"Commission : "<<com<<endl;
				
				cout<<"\n";
			}
			else if(s_qty == t_qty){
				
				com = 0.10 * t_qty;
				
				cout<<"Commission : "<<com<<endl;
				
				cout<<"\n";
			}
			else{
				cout<<"Commission : "<<com<<endl;
			}
		}
};

int main(){
	
	int n,i;
	seller s[20];
	
	cout<<"Enter number of seller : "<<endl;
	cin>>n;
	
	cout<<"\n";
	
	for(i=0;i<n;i++){
		cout<<"---------------- ENTER DETAILS OF SALESMAN "<<i+1<<"---------------"<<endl;
		cout<<"\n";
		
		s[i].setter();
	}
	
	for(i=0;i<n;i++){
		cout<<"------------------ DETAILS OF SALESMAN "<<i+1<<"-------------------"<<endl;
		cout<<"\n";
		
		s[i].getter();
		s[i].calc();
	}
	
	
}
