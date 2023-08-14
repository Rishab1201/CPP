#include<iostream>
#include<stdio.h>

using namespace std;

inline void mean(int a[],int n){
	float sum = 0;
	
	int i;
	float mean;
	
	for(i=0;i<n;i++){
		sum = sum + a[i];
	}
	
	mean = sum / n ;
	cout<<"Mean : "<<mean<<endl;
	cout<<"\n";
}

inline void  median(int a[],int n){
	float median;
	int m1,m2;
	
	if(n % 2 == 0){
		
		m1 = n / 2 ;
		m2 = (n/2) + 1;
		median =(a[m1-1] + a[m2-1])*0.5;
		
		cout<<"Median : "<<median<<endl;
		
	}
	else{
		
		median = n + 1 / 2;
		
		cout<<"Median : "<<median<<endl;
	}
}

inline mode(int a[],int n){
	int i,j,inc,k=0;
	
	int max=1,element[n];
	
	
	for(i=0;i<n;i++){
		inc =0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				inc++;
			}
		}
		if(inc>=max){
			max = inc;
			if(inc==max){
				element[k++]=a[i];
			}
			else{
				element[0]=a[i];
			}
		}
	}
	
	cout<<"Mode : "<<element[0]<<endl;
}

int main()
{
	int n,a[10],i;
	
	
	cout<<"How many values you want to enter : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	mean(a,n);
	median(a,n);
	mode(a,n);
	
}
