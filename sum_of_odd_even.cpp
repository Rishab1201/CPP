#include<iostream>

using namespace std;

int main()
{
	int a[100],i,num,odd,eve;
	
	cout<<"How many elements you want to enter:"<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		cin>>a[i];
	}
	
	for(i=1;i<=num;i++)
	{
		if(a[i] % 2 == 0)
		{
			eve = eve + a[i];
//			cout<<"Eve--->"<<eve<<endl;
		}
		else if(a[i] % 2 != 0)
		{
			odd = odd + a[i];
//			cout<<"Odd--->"<<odd<<endl;
		}
	}
	cout<<"Even:"<<eve<<endl;
	cout<<"Odd:"<<odd<<endl;
	
	int b[2] = {eve,odd};
	
	cout<<"Sum of even:"<<b[0]<<endl;
	cout<<"Sum of odd:"<<b[1]<<endl;
}
