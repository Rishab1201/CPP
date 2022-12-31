#include<iostream>

using namespace std;

int main()
{
	int a[2][2],i,j;
	
	cout<<"Enter element:"<<endl;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
//			if(i==j)
//			{
				cout<<a[i][j];
				cout<<'\t';
			//}
		}
		cout<<'\n';
	}
}
