#include<iostream>

using namespace std;

class fraction{
	public:
		int nume;
		int deno;
	
	fraction()
	{
		nume = 0;
		deno = 1;
	}
	
	fraction(int n, int d)
	{
		int x,i;
		
		for(i=1;i<=n && i<=d;i++)
		{
			if(n % i == 0 && d % i == 0)
			{
				x = i;			
			}
		}
		cout<<"GCD"<<x<<endl;
		
		nume = n/x;
		deno = d/x;
		
		cout<<"Numerator:"<<nume<<endl;
		cout<<"Denomenator:"<<deno<<endl;
	}

	
	void display()
	{
		cout<<"Numerator:"<<nume<<endl;
		cout<<"Denomenator:"<<deno<<endl;
	}
};

int main()
{
	int n;
	int d;
	
	cout<<"Enter two numbers:"<<endl;
	cin>>n>>d;
	
	fraction f(n ,d);
	f.display();
	
}
