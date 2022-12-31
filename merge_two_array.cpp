#include<iostream>

using namespace std;

int main()
{
	int a[10],b[10],i,num,val,j,k=0,sum=0,temp[100];
	
	cout<<"Enter number of first array:"<<endl;
	cin>>num;
	
	cout<<"Enter number of second array:"<<endl;
	cin>>val;
	
	for(i=0;i<num;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<val;i++)
	{
		cin>>b[i];
	}
	
	sum=num+val;
	
	for(i=0;i<num;i++)
	{
		temp[k++]=a[i];
	}
	
	for(i=0;i<val;i++)
	{
		temp[k++]=b[i];
	}
	
	for(k=0;k<sum;k++)
	{
		cout<<temp[k];
	}
	
	
}
