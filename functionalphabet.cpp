#include<iostream>

using namespace std;

char chara(char a)
{
	if((a>=97 && a<=122) || (a>=65 && a<=90))
	{
		if(a>=97 && a<=122)
		{
			cout<<"Lowercase alphabet";	
			a = a - 32;
			cout<<"\n";
			cout<<"converted to Uppercase: "<<a;
		}	
		else
		{
			cout<<"Uppercase alphabet";
			a = a + 32;
			cout<<"\n";
			cout<<"Converted to lowercase: "<<a;
		}
	}
	else if((a>=32 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) ||(a>=123 && a<=126))
	{
		cout<<"Special character";	
	}	
	else
	{
		cout<<"Number";
	}
}


int main()
{
	char ch,i;
	
	cout<<"Enter character:"<<endl;
	cin>>ch;
	
	chara(ch);
	
}
