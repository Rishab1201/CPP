#include<iostream>

using namespace std;

int main()
{
	int areaofroom,l,b,h,areaofwindow,len,bre,areaofdoor,dl,db,paint;
	
	cout<<"Enter length breath height to calculate area of room"<<endl;
	
	cout<<"Enter length:";
	cin>>l;
	
	cout<<"\n";
	
	cout<<"Enter height:";
	cin>>h;
	
	cout<<"\n";
	
	cout<<"Enter breadth:";
	cin>>b;
	
	cout<<"\n";
	
	areaofroom = 2*((l*b)+(b*h)+(h*l));
	
	cout<<"Area of room:"<<areaofroom<<endl;
	
	cout<<"\n";
	
	cout<<"Windows";
	
	cout<<"\n";
	
	cout<<"Enter length:";
	cin>>len;
	
	cout<<"\n";
	
	cout<<"Enter breadth:";
	cin>>bre;
	
	cout<<"\n";
	
	areaofwindow = 2*(len*bre);
	
	cout<<"Area of window:"<<areaofwindow<<endl;
	
	cout<<"Door";
	
	cout<<"\n";
	
	cout<<"Enter length:";
	cin>>dl;
	
	cout<<"\n";
	
	cout<<"Enter Breadth:";
	cin>>db;
	
	cout<<"\n";
	
	areaofdoor = dl*db;
	
	cout<<"Area of door:"<<areaofdoor<<endl;
	
	cout<<"\n";
	
	cout<<"----PAINTED AREA OF ROOM----";
	
	cout<<"\n";
	
	paint = areaofroom-(areaofwindow+areaofdoor+l*b);
	
	cout<<paint;
	
}
