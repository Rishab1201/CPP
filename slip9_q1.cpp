#include<iostream>

using namespace std;

class MyArray{
	public :
		int n;
		int *arr;
		
	MyArray(){
		
		arr = new int[30];
		int i;
		
		cout<<"How many values do you want to enter : "<<endl;
		cin>>n;
		
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<"\n"; 
	}
	
	void getter(){
		
		int i;
		
		for(i=0;i<n;i++){
			cout<<arr[i];
		}
		cout<<"\n";
	}
};

int main(){
	MyArray a;
	a.getter();
}
