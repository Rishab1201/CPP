#include<iostream>

using namespace std;

class MyMatrix{
	public:
		int a[10][10];
		int r;
		int c;
		
		
		void accept(){
			int i,j;
			
			cout<<"Enter number of elements for row : "<<endl;
			cin>>r;
			
			cout<<"Enter number of elements for coloumn : "<<endl;
			cin>>c;
			
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cin>>a[i][j];
				}
				cout<<"\n";
			}
			cout<<"\n";
		}
		
		void display(){
			int i,j;
			
			cout<<"--------------------- DISPLAY OF MATRIX ---------------------------"<<endl;
			cout<<"\n";
			
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++){
					cout<<a[i][j];
					cout<<"\t";
				}
				cout<<"\n";
			}
			cout<<"\n";
		}
		
		void operator - (){
			int i,j;
			
			cout<<"--------------------- TRANSPOSE OF MSTRIX ---------------------------"<<endl;
			cout<<"\n";
			
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cout<<a[j][i];
					cout<<'\t';
				}
				cout<<"\n";
			}
			cout<<"\n";
		}
		
		void operator ++ (){
			int i,j;
			
			cout<<"---------------------INCREMENT MATRIX ELEMENTS BY 1---------------------------"<<endl;
			cout<<"\n";
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					a[i][j]++;
					
				}
			}
			
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cout<<a[i][j];
					cout<<"\t";
				}
				cout<<"\n";
			}
		}
		

};

int main(){
	MyMatrix m;
	m.accept();
	m.display();
	m.operator-();
	m.operator ++();
}
