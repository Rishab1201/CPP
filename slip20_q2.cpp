#include<iostream>
#include<stdio.h>

using namespace std;

class dimension{
	public:
	int x;
	int y;
	
	
	void setter(){
		cout<<"Enter the value of coordinate X and Y :- "<<endl;
		cin>>x>>y;
	}	
	
	dimension operator +(dimension d1){
		dimension d;
		d.x = x + d1.x;
		d.y = y + d1.y;
		
		cout<<"X coordinate :- "<<x<<endl;
		cout<<"Y coordinate :- "<<y<<endl;
		
		return d;
	} 
	
	void operator--(){	
		if(x<0){
			x = x - (x * 2);
		}
		else{
			x = x + (x* -2);
		}
		if(y<0){
			y = y - (y * 2);
		}
		else{
			y = y + (y * -2);
		}
	}
	
	void operator * (){
		int n;
		cout<<"Enter the number you want to multiply :- "<<endl;
		cin>>n;
		
		x = x * n;
		y = y * n;
		
	}
	
	void display(){
		cout<<"Addition of coordinate X :- "<<x<<endl;
		cout<<"Addition of coordinate Y :- "<<y<<endl;
		cout<<"\n";
	}
};

int main(){
	
	dimension d1,d2,d3;
	d1.setter();
	d2.setter();
	
	d3 = d1 + d2;
	d3.display();
	
	d1.operator--();
	d1.display();
	
	d1.operator *();
	d1.display();
	
}
