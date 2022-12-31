#include<iostream>

using namespace std;

class car{
	public:
	string name;
	string colour;
	string speed;
	string price;
	
	void display();	
};

void car::display()
{
	cout<<"Car name:"<<name<<endl;
	cout<<"Car colour:"<<colour<<endl;
	cout<<"Car speed:"<<speed<<endl;
	cout<<"Car price:"<<price<<endl;
	
	cout<<"\n";
}

int main()
{
	int n,i;
	car c[10];
	
	cout<<"how many object:"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter Name:"<<endl;
		cin>>c[i].name;
		cout<<"Enter colour:"<<endl;
		cin>>c[i].colour;
		cout<<"Enter price:"<<endl;
		cin>>c[i].price;
		cout<<"Enter speed:"<<endl;
		cin>>c[i].speed;
		cout<<"\n";
		
	}
	
	for(i=0;i<n;i++)
	{
		c[i].display();
		cout<<"\n";
		
	}
//	cin>>c1.name;
//	c1.colour = "Black";
//	c1.price = "60.5 lkh";
//	c1.speed = "200kph";
//	
//	c2.name = "Mustang";
//	c2.colour = "Blue";
//	c2.price = "72.80 lkh";
//	c2.speed = "210kph";
//	
//	c3.name = "scorpio";
//	c3.colour = "Black";
//	c3.price = "21.5 lkh";
//	c3.speed = "100kph";
//	
//	c1.display();
//	c2.display();
//	c3.display();
}
