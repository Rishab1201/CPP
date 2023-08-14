#include<iostream>

using namespace std;

class MyMatrix{
	public :
		int a[10][10];
		int r;
		int c;
		
		void setter(){
			int i,j;
			
			cout<<"Enter Number of Elements in row : "<<endl;
			cin>>r;
			
			cout<<"Enter Number of Elements in coloumn : "<<endl;
			cin>>c;
			
			cout<<"\n";
			
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cin>>a[i][j];
				}
			}
			cout<<"\n";
		}
		
		void display(){
			cout<<"\n";
			
			int i,j;
			
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cout<<a[i][j];
					cout<<"\t";
				}
				cout<<"\n";
			}
			
			cout<<"\n";
		}
		
		MyMatrix operator - (const MyMatrix &obj){
			int b[10][10];
			
			int i,j;
			
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					b[i][j] = obj.a[i][j] - a[i][j];
				}
			}
			
			cout<<"-------------------- SUBSTRACTION OF 2 MATRIX -------------------"<<endl;
			cout<<"\n";
			
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cout<<b[i][j];
					cout<<"\t";
				}
				cout<<"\n";
			}
			cout<<"\n";
		}
};

int main(){
	MyMatrix m1,m2;
	
	m1.setter();
	m1.display();
	
	m2.setter();
	m2.display();
	
	m1 - m2;
}
