#include<iostream>
#include<stdlib.h>

using namespace std;

class points{
	
	int x,y;
	
	public:
	int setpoints(int a,int b){
		x=a;
		y=b;
	}
	
	void display(){
		cout<<"X coordinates and Y coordinates :- "<<"("<<x<<","<<y<<")"<<endl;
	}
};

int main(){
	int a,b;
	points p;
	cout<<"Enter value of x coordinates :- "<<endl;
	cin>>a;
	
	cout<<"Enter value of y coordinates :- "<<endl;
	cin>>b;
	
	p.setpoints(a,b);
	p.display();
}
