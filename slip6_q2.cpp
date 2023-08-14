#include<iostream>

using namespace std;

class matrix{
	
	public:
		int row;
		int col;
		int a[10][10];
		int n,i,j;
		
		matrix()
		{
			cout<<"How many rows you want to enter :- "<<endl;
			cin>>row;
			
			cout<<"How many columns you want to enter :- "<<endl;
			cin>>col;
			
			cout<<"\n";
			
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					cin>>a[i][j];

				}
			}
			
		}
		
		void display()
		{
			cout<<"----------------MATRIX----------------";
			cout<<"\n";
			
			for(i=0;i<col;i++)
			{
				for(j=0;j<col;j++)
				{
					cout<<a[i][j];
					cout<<"\t";
				}
				cout<<"\n";
			}
			cout<<"\n";
		}
		
		transpose_mat()
		{
			cout<<"-----------------TRANSPOSE MATRIX----------------";
			cout<<"\n";
			
			for(i=0;i<col;i++)
			{
				for(j=0;j<row;j++)
				{
					cout<<a[j][i];
					cout<<"\t";	
				}	
				cout<<"\n";
			}
			cout<<"\n";
		}
		
		~matrix(){};
};

int main()
{
	matrix m1;
	m1.display();
	m1.transpose_mat();
}
