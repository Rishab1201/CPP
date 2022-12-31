#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int x1,x2,y1,y2;
	
	cout<<"Enter co-ordinate x1,y1:"<<endl;
	
	cin>>x1>>y1;
	
	cout<<"Enter co-ordintate x2,y2:"<<endl;
	
	cin>>x2>>y2;
	
	cout<<"\n";
	
	cout<<"Ans:"<<endl;
	
	cout<<"Distance between two co-ordinantes:"<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
}
