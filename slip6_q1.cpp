#include<iostream>

using namespace std;

class square;

class rectangle{
	
	public:
		int l;
		int b;
		int area;
	
		void setter(){
			cout<<"Enter length of rectangle : "<<endl;
			cin>>l;
			
			cout<<"Enter breadth of rectangle : "<<endl;
			cin>>b;
		}
		
		void getter(){
			area = l * b;
			
			cout<<"Area of Rectangle : "<<area<<endl;
		}
		
		friend void compare(rectangle,square);
};

class square{
	public:
		int a;
		int area1;
	
		void accept(){
			cout<<"Enter side of square : "<<endl;
			cin>>a;
		}
		void display(){
			area1 =  a * a;
			cout<<"Area of Square : "<<area1<<endl;
		}
		
		friend void compare(rectangle,square);
};

void compare(rectangle r,square s){
	
	if(s.area1>r.area){
		cout<<"Area of Square is greater than Area Rectangle"<<endl;
	}
	else{
		cout<<"Area of Rectangle is greater than Area Square"<<endl;
	}
}

int main(){
	rectangle r;
	square s;
	
	s.accept();
	r.setter();
	s.display();
	r.getter();
	
	compare(r,s);
}
