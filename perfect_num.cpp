#include<iostream>

using namespace std;

int main()
{
	int i,num,sum,flag=0,j;
	
	cout<<"Enter the range:"<<endl;
	cin>>num;
	
	for(i=6;i<=num;i++)
	{
		sum = 0;	
		for(j=1;j<i;j++)
		{
			if(i % j == 0)
			{
//				cout<<i<<"-->"<<j<<endl;
//				cout<<"\n";
				sum = sum + j;
			}
			
		}
		
		if(sum == i)
		{
			cout<<i<<endl;
		}
		
	}
	
//	if(flag==1)
//	{
//		cout<<"perfect number";
//	}
//	else
//	{
//		cout<<"Not perfect number";
//	}
}
