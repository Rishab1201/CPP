#include<iostream>

using namespace std;

int main()
{
	int A=25,B=75;
	int salA=0,salB=0,total_sal;
	int total_time=270;
	int time,i;
	int turnA=0,turnB=0,flag=1;
	
	
	while(total_time>0)
	{
		if(flag % 2 == 0)
		{
			if(total_time<75)
			{
				salB = salB + total_time * 2;
				
				total_time = total_time - 75;
			
				cout<<"TurnB:"<<turnB;
				cout<<"\t";
				cout<<"salary of B:"<<salB<<endl;
				
				turnB++;
			}
			
			else
			{
				salB = salB + 150;
				
				total_time = total_time -75;
				
				cout<<"TurnB:"<<turnB;
				cout<<"\t";
				cout<<"salary of B:"<<salB<<endl;			
				
				turnB++;
			}

		}
		
		else if(flag % 2 != 0)
		{
			if(total_time<25)
			{
				salA = salA + total_time * 2;
				
				total_time = total_time - 25;
				
				cout<<"TurnA:"<<turnA;
				cout<<"\t";
				cout<<"salary of A:"<<salA<<endl;
				
				turnA++;
			}
			else
			{
				salA = salA + 50;
				
				total_time = total_time - 25;
				
				cout<<"TurnA:"<<turnA;
				cout<<"\t";
				cout<<"salary of A:"<<salA<<endl;
				
				turnA++;
			}
		}
		flag++;
		
	}
	
	total_sal = salA + salB;
	
	cout<<"\n";
	
	cout<<"--------------TOTAL SALARY--------------"<<endl;
	
	
	cout<<"Total salary of A and B is:"<<total_sal<<endl;
}
