#include<iostream>

using namespace std;

inline diameter(int r){
	
	int d;
	
	d = 2 * r;
	
	cout<<"Diameter of circle : "<<d<<endl;
	
	cout<<"\n";
}

inline circumference(int r){
	
	int c;
	
	c = 2 * 3.14 * r;
	
	cout<<"Circumference of circle : "<<c<<endl;
	
	cout<<"\n";
}

inline area(int r){
	
	int a;
	
	a = 3.14 * r * r;
	
	cout<<"Area of circle : "<<a<<endl;
	
	cout<<"\n";
}

int main(){
	
	int r;
	
	cout<<"Enter radius of circle : "<<endl;
	cin>>r;
	
	diameter(r);
	circumference(r);
	area(r);
	
}
