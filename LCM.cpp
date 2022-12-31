#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int num,num1,i,arr[100],j=0,max=0,k=0,flag=1,temp,lcm;
	
	cout<<"Enter the number:"<<endl;
	cin>>num;
	
	cout<<"Enter the second number:"<<endl;
	cin>>num1;
	

	
	if(num>num1)
	{
		temp = num;
		num = num1;
		num1 = temp;
	}
	
	for(i=1;i<=num;i++)
	{
		if(num % i==0)
		{
			arr[j++] = i;
			
		}
	}
	
//	for(i=1;i<=j;i++)
//	{
//		if(max<arr[i])
//		{
//			max=arr[i];
//		}
//	}
	
	for(i=1;i<=j;i++)
	{
		if(num1 % arr[i]==0)
		{
			flag=arr[i];
		}
	}
	
	lcm = (num*num1)/flag;
	cout<<"LCM= "<<lcm;
}
