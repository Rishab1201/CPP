#include<iostream>
#include<stdio.h>

using namespace std;

inline int max(int a,int b){
	
	int max;
	
	max = a>b ? a:b;
	
	return max;
}

inline int min(int a,int b){
	
	int min;
	
	min = a<b ? a:b;
	
	return min;
}
int main(){
	
	int a,b;
	
	cout<<"Enter value of a and b"<<endl;
	cin>>a>>b;
	
	cout<<"Maximum of the two numbers :- "<<max(a,b)<<endl;
	cout<<"Minimum of the two numbers :- "<<min(a,b);
}
