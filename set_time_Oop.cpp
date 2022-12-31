#include<iostream>

using namespace std;

class time
{
	public:
		int minute;
		int hours;
		int sec;
		
  	void showtime()
	{	
		cout<<"h:M:S"<<endl;
		cout<<hours<<":"<<minute<<":"<<sec;
		
		cout<<"\n";
		
		cout<<"----------------------------------------------------";
		
		cout<<"\n";
	}	
	
	void addtime();
	
//	void showtime()
//	{
//		cout<<"h:M:S"<<endl;
//		cout<<hours<<":"<<minute<<":"<<sec;
//	}
};

void time::addtime() 
{
		int hh,mm,ss;
		int rem,r,reminder,s = 0,m = 0,q = 0,q1 = 0,q2 = 0;
		
		cout<<"Enter hours to add:"<<endl;
		cin>>hh;
		
		cout<<"Enter minutes to add:"<<endl;
		cin>>mm;
		
		cout<<"Enter seconds to add:"<<endl;
		cin>>ss;
		
		
		if(ss<60)
		{
			sec = sec + ss;	
			if(sec>60)
			{
				rem = sec % 60;
				s = s + rem;
				q = sec / 60;
				cout<<"Seconds:"<<s<<endl;
			}
		}
		else
		{
			cout<<"seconds should be smaller than 60"<<endl;
		}
		
		
		if(mm<=60)
		{
			minute = minute + q;
			cout<<minute<<endl;
			minute = minute + mm;
			cout<<minute<<endl;
			
			if(minute>60)
			{
				r = minute % 60;
				m = m + r;
				q1 = minute / 60;
				cout<<"Minute:"<<m<<endl;
			}
		}
		else
		{
			cout<<"Minutes should be smaller than 60"<<endl;
		}
		
		
		if(hh<=24)
		{
			hours = hours + q1;
			hours = hours + hh;
			
			if(hour>24)
			{
				
			}
		}
		else
		{
			cout<<"Hours should be smaller than 12."<<endl;
		}
		
		
		
		
		
		
		cout<<"--------------NEW TIME-------------";
		
		cout<<"\n";
		
		cout<<"HH:MM:SS"<<endl;
		cout<<hours<<":"<<m<<":"<<s;
}


int main()
{
	time t1;
	 
	cout<<"Enter hours:"<<endl;
	cin>>t1.hours;
	 
	cout<<"Enter minute:"<<endl;
	cin>>t1.minute;
	 
	cout<<"Enter seconds:"<<endl;
	cin>>t1.sec;
	 
	t1.showtime();
	
	t1.addtime();
	
	
	
	 
	
}
