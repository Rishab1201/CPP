#include<iostream>

using namespace std;

class Myarray{
	public:
		int arr[10];
		int n;
		
		void setter(){
			int i;
			cout<<"How many values you want to enter : "<<endl;
			cin>>n;
			
			for(i=0;i<n;i++){
				cin>>arr[i];
			}
			cout<<"\n";
		}
		
		void operator -(){
			
			int i;
			
			for(i=n-1;i>=0;i--){
				cout<<arr[i];
			}
			cout<<"\n";
		}
		
		void operator + (){
			int num,i;
			
			cout<<"Enter number to add : "<<endl;
			cin>>num;
			
			for(i=0;i<n;i++){
				arr[i] = arr[i] + num;
				cout<<arr[i];
			}
		}
};

int main(){
	Myarray a;
	a.setter();
	a.operator -();
	a.operator +();
}
