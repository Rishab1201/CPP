#include<iostream>

using namespace std;

int main()
{
	int a[10][10],row,col,i,j,temp[10][10];
	
	cout<<"Enter elements in row:"<<endl;
    cin>>row;
	
	cout<<"Enter elements in column:"<<endl;
	cin>>col;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			temp[j][i]=a[i][j];
			
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<temp[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
}
