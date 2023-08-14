#include<iostream>
#include<stdio.h>

using namespace std;

class time{

	public:
		
	int hh,mm,ss;
	
	void operator >>(time t){
		cout<<"Enter hours : "<<endl;
		cin>>hh;
		
		cout<<"Enter minutes : "<<endl;
		cin>>mm;
		
		cout<<"Enter seconds : "<<endl;
		cin>>ss;
		
		cout<<"\n";
	}
	void operator<<(time t){
		cout<<"Time : "<<hh<<":"<<mm<<":"<<ss<<endl;
		cout<<"\n";
	}	
	
	time operator != (time t1){
		
		if(t1.hh == hh){
			cout<<"Hours are equal"<<endl;
			if(t1.mm == mm){
				cout<<"Minutes are equal "<<endl;
				
				if(t1.ss == ss){
					cout<<"Seconds are equal"<<endl;
				}
				else{
					cout<<" SECONDS ARE NOT EQUAL"<<endl;
				}
			}
			else
			{
				cout<<"MINUTES ARE NOT EQUAL"<<endl;
			}
		}
		else{
			cout<<"HOURS ARE NOT EQUAL"<<endl;
		}
		
	}
	

};

int main(){
	time t,t1;
	t.operator >>(t);
	t.operator<<(t);

	t1.operator >>(t1);
	t1.operator<<(t1);
	
	t1.operator != (t);
}
