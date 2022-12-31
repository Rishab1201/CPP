#include<iostream>
using namespace std;

int main()
{
int hrs,min,sec,temp1,temp2,temp3,quo1,quo2,quo3,sec_,min_,hrs_;
cout<<"enter sec:";
cin>>sec;

cout<<"enter min:";
cin>>min;

cout<<"enter hours:";
cin>>hrs;



	if(sec>60)
	{
	temp1=sec%60;
	sec_=temp1;
	quo1=sec/60;
	min_=min+quo1;

	if(min_>60)
   	{
    	temp2=min_%60;
        quo2=min_/60;
       	min_=temp2;
		hrs_=hrs+quo2;

		if(hrs_>12)
          {
            temp3=hrs_%12;      
          	hrs_=temp3;
       	 }


   }
   


}
cout<<sec_<<" seconds"<<endl;
cout<<min_<<" minutes"<<endl;
cout<<hrs_<<" hours"<<endl;
}
