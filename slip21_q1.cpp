#include<iostream>
#include<string.h>

using namespace std;

class Mystring{
	public:
		char ch[30];
		
		void setter(){
			cout<<"Enter the string :- "<<endl;
			cin>>ch;
		}
		
		void operator + (Mystring s){
			strcat(ch,s.ch);
			
			cout<<"String :- "<<ch<<endl;
		}
};
int main(){
	Mystring s1,s2;
	
	s1.setter();
	s2.setter();
	
	s1.operator +(s2);
}
