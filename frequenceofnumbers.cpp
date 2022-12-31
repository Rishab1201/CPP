#include<iostream>

using namespace std;

int main()
{
	int num,i,arr[25],cnt,j,flag;
	
	cout<<"Enter number:"<<endl;
	cin>>num;
	
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
		cout<<endl;	
	}
	
	for(i=0;i<num;i++)
	{
		if(flag==cnt)
		{
			break;
		}
		for(j=i+1;j<num;j++)
		{
			if(arr[i]==arr[j])
			{
				flag = cnt++;
//				cout<<cnt;
//				cout<<flag;
			}
		}
		cout<<flag;
	}
	
}
