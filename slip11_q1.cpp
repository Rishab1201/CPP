#include<iostream>

using namespace std;

class date{
	public:
		int d;
		int m;
		int y;
		
		date(){
			d = 30;
			m = 3;
			y = 2023;
			
			cout<<"\n";	
		}
		
		date(int dd,int mm,int yy){
			
			d = dd;
			m = mm;
			y = yy;
			
			cout<<"\n";
		}
		
		void display(){
			switch(m){
				case 1 :
						cout<<d<<"-Jan-"<<y<<endl;
					break;
					
				case 2 :
						cout<<d<<"-Feb-"<<y<<endl;
					break;
					
				case 3 :
						cout<<d<<"-March-"<<y<<endl;
					break;
					
				case 4 :
						cout<<d<<"-April-"<<y<<endl;
					break;
					
				case 5 :
						cout<<d<<"-May-"<<y<<endl;
					break;
					
				case 6 :
						cout<<d<<"-June-"<<y<<endl;
					break;
					
				case 7 :
						cout<<d<<"-July-"<<y<<endl;
					break;
					
				case 8 :
						cout<<d<<"-Aug-"<<y<<endl;
					break;
					
				case 9 :
						cout<<d<<"-Sept-"<<y<<endl;
					break;
					
				case 10 :
						cout<<d<<"-Oct-"<<y<<endl;
					break;
					
				case 11 :
						cout<<d<<"-Nov-"<<y<<endl;
					break;
					
				case 12 :
						cout<<d<<"-Dec-"<<y<<endl;
					break;
			}
		}
};

int main(){
	int dd,mm,yy;
	
	cout<<"Enter Day : "<<endl;
	cin>>dd;
	
	cout<<"Enter Month : "<<endl;
	cin>>mm;
	
	cout<<"Enter Year : "<<endl;
	cin>>yy;
	
	date d;
	date d1(dd,mm,yy);
	
	d.display();
	d1.display();
}
