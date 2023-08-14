#include<iostream>
#include<stdio.h>

using namespace std;

int swap(int &num1,int &num2){
	int temp;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<"value of a :- "<<num1<<endl;
	cout<<"Value of b :- "<<num2<<endl;
}
int main(){
	int a,b;
	
	cout<<"Enter the number a and b :- "<<endl;
	cin>>a>>b;
	
	swap(a,b);
	
}
