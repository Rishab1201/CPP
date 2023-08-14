/*
	Create a C++ base class Shape. Derive three different classes Circle, Sphere and Cylinder from shapeclass. 
	Write a C++ program to calculate area of Circle, Sphere and Cylinder. (Use pure virtual function).		
*/

#include<iostream>
#include<stdio.h>

using namespace std;

class shape{
	protected:
		float r;
		float area;

		
		virtual void display()=0;
};

class circle:protected shape{
	
	public:
		void setter(){
			cout<<"Enter radius of circle :- "<<endl;
			cin>>r;
			area = 3.14 * r * r;
		}
		
		void display(){
			cout<<"Area of circle :- "<<area<<endl;
		}
};

class sphere:protected shape{
	
	public:
		void setter1(){
			cout<<"Enter radius of sphere :- "<<endl;
			cin>>r;
			
			area = 4 * 3.14 * r * r;
		}
		
		void display(){
			cout<<"Area of sphere :- "<<area<<endl;
		}
};

class cylinder:protected shape{
	public:
		int h;
		
		void setter2(){
			cout<<"Enter radius of cyclinder :- "<<endl;
			cin>>r;
			
			cout<<"Enter height of cyclinder :- "<<endl;
			cin>>h;
			
			area = (2 * 3.14 * r * h) + (2 * 3.14 * r *r );
		}
		void display(){
			cout<<"Area of cyclinder :- "<<area<<endl;
		}
};

int main(){
	
	circle c;
	sphere s;
	cylinder cy;
	
	c.setter();
	s.setter1();
	cy.setter2();
	
	c.display();
	s.display();
	cy.display();
}
