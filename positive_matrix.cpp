#include<iostream>

using namespace std;

int main()
{
	int a[10][10],i,j,r,c;
	
	cout<<"Enter element in row:"<<endl;
	
	cin>>r;
	
	cout<<"Enter element in column:"<<endl;
	
	cin>>c;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
			
		}
		
	}
	
	cout<<"------negative elements-------"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]<0)
			{
				cout<<a[i][j];
				cout<<"\n";
			}
		}
		cout<<"\n";
	}
	
	cout<<"--------positive elements---------"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>0)
			{
				cout<<a[i][j];
				cout<<"\t";
			}
		}
		cout<<"\n";
	}
	
	cout<<"--------zero elements---------"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==0)
			{
				cout<<a[i][j];
				cout<<"\t";
			}
		}
		cout<<"\n";
	}
}
