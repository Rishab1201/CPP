#include<iostream>

using namespace std;

class product{
	public:
		int prod_no;
		string prod_name;
		float prod_price;
		int qty;
};

class Discount: public product{
	public:
		float discount;
		float dis_price;
		
		void setter(){
			cout<<"Enter Product Number :: ";
			cin>>prod_no;
			
			cout<<"\n";
			
			cout<<"Enter Product Name :: ";
			cin>>prod_name;
			
			cout<<"\n";
			
			cout<<"Enter Product Price ::";
			cin>>prod_price;
			
			cout<<"Enter Quantity :: ";
			cin>>qty;
			
			cout<<"\n";
			
			discount = 10;
			
			prod_price = prod_price * qty;
			
			dis_price  = prod_price - prod_price * 10 / 100;
			
		}
		
		void display()
		{
			cout<<"Product Number :: "<<prod_no<<endl;
			cout<<"Product Name :: "<<prod_name<<endl;
			cout<<"Product Price :: "<<prod_price<<endl;
			cout<<"Discount :: "<<discount<<"%"<<endl;
			cout<<"Discounted Amount on product :: "<<dis_price<<endl;
		}
};
int main()
{
	Discount d;
	d.setter();
	d.display();
}
