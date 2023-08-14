#include<iostream>

using namespace std;

class Distance{
	public:
		int cm;
		int m;
		
		void setter(int a,int b){
			this ->m = a;
			this ->cm = b;
		}
		
		void display()
		{
			cout<<"Meter :: "<<m<<endl;
			cout<<"Centemeter :: "<<cm<<endl;
		}
		
		void larger(){
			if(m > cm ){
				cout<<"Meter is larger than centemeter. "<<endl;
			}
			else if(cm > m){
				cout<<"Centemeter is larger than meter."<<endl;
			}
			else{
				cout<<"Both are equal."<<endl;
			}
		}
};

int main(){
	int a,b;
	Distance d;
	cout<<"Enter the value of meter :: ";
	cin>>a;
	
	cout<<"\n";
	
	cout<<"Enter the value of centemeter :: ";
	cin>>b;
	
	cout<<"\n";
	d.setter(a,b);
	d.display();
	d.larger();
}
