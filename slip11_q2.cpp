#include<iostream>

using namespace std;

class weight{
	int kg;
	int g;
	
	public:
		
		weight(){
			kg = 0;
			g = 0;
		}
		
		void setter(){
			cout<<"Enter kilogram : "<<endl;
			cin>>kg;
			
			cout<<"Enter Gram : "<<endl;
			cin>>g;
			
			cout<<"\n";
		}
		
		void getter(){
			cout<<kg<<" kg"<<endl;
			
			cout<<g<<" g"<<endl;
			
			cout<<"\n";
		}
		
		weight operator +=(weight w){
			weight w1;
			
			w1.kg = w.kg + kg;
			w1.g = w.g + g;
			
			return w1;
		}
};

int main(){
	weight w,w1,w2;
	
	w.setter();
	w1.setter();
	
	w2 = w += w1;
	
	w.getter();
	w1.getter();
	w2.getter();
}
