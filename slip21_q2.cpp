#include<iostream>
#include<stdio.h>

using namespace std;

class complex{
	
	public:
		int real;
		int imaginary;
		
		complex(){
			cout<<"Enter real number :- "<<endl;
			cin>>real;
			
			cout<<"Enter Imaginary number :- "<<endl;
			cin>>imaginary;
		}
		
		void display(){
			cout<<"complex number is :- "<<real<<" + i"<<imaginary<<endl;
		}
		
		friend void complexadd(complex c2);
		
};

void complexadd(complex c1,complex c2){
	int new_real,new_img;
	new_real = c1.real + c2.real;
	new_img = c1.imaginary + c2.imaginary;
	
	cout<<"Addition of complex number is :- "<<new_real<<"+ i"<<new_img<<endl;
}

int main(){
	
	complex c1,c2;
	
	c1.display();
	c2.display();
	
	complexadd(c1,c2);
}
