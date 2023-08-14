#include<iostream>

using namespace std;

class cuboid{
	
	public:
		float len;
		float bre;
		float hei;
		
		inline void set(float l,float b,float h){
			len = l;
			bre = b;
			hei = h;
		}
		
		inline void get(){
			cout<<"\n";
			
			cout<<"Length of cuboid : "<<len<<endl;
			
			cout<<"Breadth of cuboid : "<<bre<<endl;
			
			cout<<"Height of cuboid : "<<hei<<endl;
			
			cout<<"\n";
		}
		
		inline float volume(){
			
			float vol;
			
			vol = len * bre * hei;
			
			cout<<"Volume of cubiod : "<<vol<<endl;
			
			cout<<"\n";
		}
		
		inline float surface_area(){
			float sa;
			
			sa = 2*(len*hei + len*bre + hei*bre);
			
			cout<<"surface area of cuboid : "<<sa<<endl;
		}
};


int main(){
	
	int l,b,h;
	cout<<"Enter length of cuboid : "<<endl;
	cin>>l;
	
	cout<<"Enter Breadth of cuboid : "<<endl;
	cin>>b;
	
	cout<<"Enter Height of cuboid : "<<endl;
	cin>>h;
	
	cuboid c;
	
	c.set(l,b,h);
	c.get();
	c.volume();
	c.surface_area();
	
}
