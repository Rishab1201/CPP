			//1.Accept a single digit from the user and display it in words.
#include<iostream>

using namespace std;

int main()
{
	int num,rem,sum=0,r,n,arr[10],i=0,j,ch,m;
	
	m = num;
	
	cout<<"Enter the number:";
	cin>>num;
	
	cout<<"\n";
	
	while(num>=0)
	{
		rem = num%10;
		arr[i++] = rem;
		num = num/10;
	}	
	
	for(i=i-1;i>=0;i--)
	{
		ch = arr[i];
		
		switch(ch)
	{
		case 0:cout<<"Zero ";
			break;
		
		case 1:cout<<"One ";
			break;
			
		case 2:cout<<"Two ";
			break;
		
		case 3:cout<<"Three ";
			break;
			
		case 4:cout<<"Four ";
			break;
			
		case 5:cout<<"Five ";
			break;
			
		case 6:cout<<"Six ";
			break;
		
		case 7:cout<<"Seven ";
			break;
			
		case 8:cout<<"Eight ";
			break;
		
		case 9:cout<<"Nine ";
			break;
	}
	
	}
	
	
		if(m==0)
		{
			cout<<"Zero";
		}
	
	

}
