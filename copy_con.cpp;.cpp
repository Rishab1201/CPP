//copy constructer

class animal{
	public:
		string color;
		int leg;
		string name;
		
		
		animal(string col,int l,string n)
		{
			color = col;
			leg = l;
			name = n;	
		}
		
		animal(animal &t)
		{
			color = t.color;
			leg = t.leg;
			name = t.name;
		}
		
		void display();
};

void animal::display(){
	cout<<name<<endl;
	cout<<color<<endl;
	cout<<leg<<endl;
}

int main()
{
	int leg;
	string colour;
	string name;
	
	cout<<"Enter color of animal:"<<endl;
	cin>>colour;
	cout<<"Enter legs:"<<endl;
	cin>>leg;
	cout<<"Enter name:"<<endl;
	cin>>name;
	
	animal dog(colour,leg,name);
	
//	cat = dog;
	
	animal cat(dog);
	
//	cat = dog;
		
	dog.display();
	cat.display();
}
