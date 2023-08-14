#include<iostream>

using namespace std;

class number{
	public:
		int num;
		
		number(){
			num = 0;
		}
		
		number(int n){
			num = n;
		}
		
		number operator++(){
			cout<<"----------------- PRE INCREMENT --------------------"<<endl;
			cout<<"\n";
			
			num++;
			return *this;

		}
		
		number operator++(int){
			cout<<"----------------- POST INCREMENT -------------------"<<endl;
			cout<<"\n";
			
			number temp(num);
			num++;
			
			return temp;
			
		}
		
		void display(){
			
			cout<<"\n";
			
			cout<<"Number : "<<num<<endl;
			
			cout<<"\n";
		}
};

int main(){
	int n;
	
	cout<<"Enter number : "<<endl;
	cin>>n;
	
	number n1(n);
	
	n1.display();
	
	n1++;
	n1.display();
	
	++n1;
	n1.display();
}
