#include<iostream>

using namespace std;

class number{
	public:
		static int cnt;
		
		void display(){			
			cnt++;
			cout<<"Count : "<<cnt<<endl;
		}
};

int number::cnt;

int main(){
	int n,i;
	number num[30];
	
	cout<<"How many values do want to enter : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		num[i].display();
	}
}
