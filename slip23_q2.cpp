#include<iostream>

using namespace std;

class inventory{
	public :
		string model;
		string m_comp;
		string color;
		int price;
		int qty;
		
		void setter()
		{
			cout<<"Enter Model :: ";
			cin>>model;
			
			cout<<"\n";
			
			cout<<"Enter Mobile company :: ";
			cin>>m_comp;
			
			cout<<"\n";
			
			cout<<"Enter Mobile colour :: ";
			cin>>color;
			
			cout<<"\n";
			
			cout<<"Enter Price :: ";
			cin>>price;
			
			cout<<"\n";
			
			cout<<"Enter Quantity :: ";
			cin>>qty;
			
			cout<<"\n";
		}
		
		void sellmobile(int n)
		{
			if(qty >= n)
			{
				cout<<"Sale of mobile "<<endl;
				cout<<"\n";
				
				cout<<"Model :: "<<model<<endl;
				
				cout<<"Mobile company :: "<<m_comp<<endl;
				
				cout<<"Mobile colour :: "<<color<<endl;
				
				cout<<"Price :: "<<price<<endl;
				
				cout <<"Number of mobile to be sold :: "<<n<<endl;
				
				qty -= n;
			}
			else{
				cout<<"Purchase of mobile "<<endl;
				
				qty += n;
			
				cout<<"Model :: "<<model<<endl;
				
				cout<<"Mobile company :: "<<m_comp<<endl;
				
				cout<<"Mobile colour :: "<<color<<endl;
				
				cout<<"Price :: "<<price<<endl;
				
				cout <<"Number of mobile to be purchase :: "<<n<<endl;
			}
		}
		
		
};

int main()
{
	inventory inv[20];
	int n,num;
	
	cout<<"Enter number of inventor :: ";
	cin>>num;
	
	cout<<"\n";
	
	for(int i=0;i<num;i++)
	{
		inv[i].setter();
	}
	
	for(int i=0;i<num;i++)
	{
		cout<<"Enter number of stock ::"<<endl;
		cin>>n;
		
		inv[i].sellmobile(n);
	}
}
