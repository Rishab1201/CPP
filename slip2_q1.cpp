/*
	A) Write a C++ program to find volume of cylinder, cone and sphere. (Use function overloading).
*/

#include<iostream>
#include<stdio.h>

using namespace std;

int volume(int r,int h){
	
	return(3.14 * r * r * h);
	
}

float volume(float R, float a){
		
	return(3.14 * R * R * a/3);
}

int volume(int rl){
	
	return((4/3) * 3.14 * rl * rl * rl);

}

int main(){
	
	int h,r,rl,R,a;
	
	cout<<"Enter the height and radius of cylinder :- "<<endl;
	cin>>r>>h;
	
	cout<<"Enter the radius and height of cone :- "<<endl;
	cin>>R>>a;
	
	cout<<"Enter radius of sphere :- "<<endl;
	cin>>rl;
	
	cout<<"volume of cyliner :- "<<volume(r,h)<<endl;
	cout<<"volume of cone :- "<<volume(R,a)<<endl;
	cout<<"Volume of sphere :- "<<volume(rl)<<endl;
}
