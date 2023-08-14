#include<iostream>

using namespace std;

class product{
	static int cnt;
	
	public:
		int p_id;
		string p_name;
		int qty;
		int price;
		
		void setter(){
			cout<<"\n";
			
			cout<<"Enter product id : "<<endl;
			cin>>p_id;
			
			cout<<"Enter product name : "<<endl;
			cin>>p_name;
			
			cout<<"Enter quantity : "<<endl;
			cin>>qty;
			
			cout<<"Enter price : "<<endl;
			cin>>price;
			
		}
		
		void getter(){
			
			cout<<"\n";
			
			cout<<"Product Id : "<<p_id<<endl;
			
			cout<<"Product name : "<<p_name<<endl;
			
			cout<<"Quantity : "<<qty<<endl;
			
			cout<<"Price : "<<price<<endl;
			
			cnt++;
			
		}
		
		static int getcount(){
			cout<<"Count : "<<cnt<<endl;
			cout<<"\n";
		}
};
int product::cnt = 0;

int main(){
	int n,i;
	
	product p[20];
	
	cout<<"Enter number of product : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		p[i].setter();
	}
	
	for(i=0;i<n;i++){
		p[i].getter();
		p[i].getcount();
	}
}
