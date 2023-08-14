#include<iostream>
#include<stdlib.h>

using namespace std;

class dimension{
	
	public:
		int *arr;
		int size;
		
	dimension(int n){
		size = n;
		arr = new int[10];
		int i;
		
		for(i=0;i<size;i++){
			cin>>arr[i];
		}
		cout<<"\n";
	}
	void display(){
		int i;
		
		for(i=0;i<size;i++){
			cout<<arr[i]<<endl;
		}
		cout<<"\n";
	}
	
	void eve_odd(){
		int i;
		
		for(i=0;i<size;i++){
			if(arr[i] % 2 == 0){
				cout<<"Even :- "<<arr[i]<<endl;
			}
			else{
				cout<<"Odd :- "<<arr[i]<<endl;
			}
		}
		cout<<"\n";
	}
	
	~dimension(){}
};

int main(){
	int n;
	cout<<"How many element you want to enter :- "<<endl;
	cin>>n;
	dimension d(n);
	d.display();
	d.eve_odd();
}
