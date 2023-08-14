#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class FixDeposit {
private:
    string FD_No;
    string Cust_Name;
    float FD_Amt;
    float Interestrate;
    float Maturity_Amt;
    int Num_of_Months;
public:
    FixDeposit(string fd_no, string cust_name, float fd_amt, int num_of_months, float interestrate = 0.05) {
        FD_No = fd_no;
        Cust_Name = cust_name;
        FD_Amt = fd_amt;
        Num_of_Months = num_of_months;
        Interestrate = interestrate;
        Maturity_Amt = FD_Amt + FD_Amt * Interestrate * Num_of_Months / 12;
    }
    void display() {
    	cout<<"\n";
    	
        cout << fixed << setprecision(2); // set precision to two decimal places
        cout << "FD No: " << FD_No << endl;
        cout << "Customer Name: " << Cust_Name << endl;
        cout << "FD Amount: " << FD_Amt << endl;
        cout << "Interest Rate: " << Interestrate << endl;
        cout << "Number of Months: " << Num_of_Months << endl;
        cout << "Maturity Amount: " << Maturity_Amt << endl;
        
        cout<<"\n";
    }
};

int main() {
	string cust_name,fd_no;
	float fd_amt;
	int num_of_months;
	
	cout<<"Enter fix deposit number :: ";
	cin>>fd_no;
	
	cout<<"\n"; 
	
	cout<<"Enter customer name :: ";
	cin>>cust_name;
	
	cout<<"\n";
	
	cout<<"Enter Fix deposit amount :: ";
	cin>>fd_amt;
	
	cout<<"\n";
	
	cout<<"Enter number of months :: ";
	cin>>num_of_months;
	
	cout<<"\n";
	
    FixDeposit fd(fd_no, cust_name , fd_amt, num_of_months);
    fd.display();
    return 0;
}

