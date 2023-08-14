#include<iostream>

using namespace std;

class sumdata{
	
	public:
		
		int sum(int a,int b){
			
			int c;
			
			c = a + b;
			
			cout<<"Sum integer arguments : "<<c<<endl;
			
			cout<<"\n";
		}
		
		float sum(float a,float b,float c){
			
			float d;
			
			d = a + b + c;
			
			cout<<"Sum of float arguments : "<<d<<endl;
			
			cout<<"\n";
			
		}
		
		int sum(int a[],int n){
			int sum = 0,i;
			
			for(i=0;i<n;i++){
				sum = sum + a[i];
			}
			
			cout<<"Sum of all elements in an array : "<<sum<<endl;
			
			cout<<"\n";
		}
};

int main(){
	
	int a[10],b,c,n,i;
	float j,k,l;
	
	cout<<"Enter number : "<<endl;
	cin>>b>>c;
	
	cout<<"\n";
	
	sumdata s;
	
	s.sum(b,c);
	
	cout<<"Enter number for float arguments : "<<endl;
	cin>>j>>k>>l;
	cout<<"\n";
	
	s.sum(j,k,l);
	
	cout<<"how elements do you want in array : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>a[i];
		
	}
	cout<<"\n";
	
	s.sum(a,n);
	
	
}
