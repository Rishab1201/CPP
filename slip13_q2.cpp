#include<iostream>
#include<cstring>

using namespace std;

class Mystring{
	public:
		char *str;
		int str_length;
		
		Mystring(){
			str = new char[20];
			
			cout<<"Enter a string : "<<endl;
			cin>>str;
			
			str_length = strlen(str);
		}
		
		Mystring operator!()
		{
			char* r;
			r = strrev(str);
			cout<<"Reversed String :: "<<r;
			cout<<"\n";
		}
		
		bool operator<(Mystring s){
			
			return str_length < s.str_length;
		}
		
		void addconst(){
			char n;
			char *str1;
			cout<<"Enter Character two add : "<<endl;
			cin>>n;
			
			for(int i=0; i<str_length; i++) {
            	
            	if(str[i] >= 'a' && str[i] <= 'z') {
                	str1[i] = (str[i] - 'a' + n) % 26 + 'a';	
            	} 
				else if(str[i] >= 'A' && str[i] <= 'Z') 
				{
                	str1[i] = (str[i] - 'A' + n) % 26 + 'A';
            	}
        }
			cout<<"ADDING CONSTANT 'n' in string : "<<endl;
			cout<<str1;
			
			cout<<"\n";
			
		}
		
		void display(){
			
			cout<<"Length Of string ::"<<str_length;
			
			cout<<"\n";
			
			cout<<"String : "<<str;
			
			cout<<"\n";
		}
		
};

int main()
{
	Mystring s,s1;
	s.display();
	s1.display();
	
	s.operator!();
	
	cout<<"\nLength Of two string: \n"<<(s1<s);
	cout<<"\n";
	
	s.addconst();
}
