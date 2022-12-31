#include<iostream>

using namespace std;

int main()
{
	char chara;
	
	cout<<"Enter character:";
	cin>>chara;
	
	cout<<"\n";
	
	
	if((chara=='A' || chara=='a') || (chara=='E' || chara=='e') || (chara=='I' || chara=='i') || (chara=='O'|| chara=='o') || (chara=='U' || chara=='u'))
	{
		cout<<"Entered character is vowel";
	}
	else
	{
		cout<<"Entered character is consonant";
	}
}
