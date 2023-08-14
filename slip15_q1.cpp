#include <iostream>
#include <iomanip>

using namespace std;

class Machine {
private:
    int Machine_Id;
    string Machine_Name;
    int  Price;

public:
    Machine(int id, string name, int price) {
        Machine_Id = id;
        Machine_Name = name;
        Price = price;
    }

    Machine(const Machine &machine) {
        Machine_Id = machine.Machine_Id;
        Machine_Name = machine.Machine_Name;
        Price = machine.Price;
    }

    void display() {
        cout << setw(10) << left << "Machine ID: " << setw(10) << left << Machine_Id << endl;
        cout << setw(10) << left << "Machine Name: " << setw(10) << left << Machine_Name << endl;
        cout << setw(10) << left << "Price: " << setw(10) << left << setprecision(2) << fixed << Price << endl;
    }
};

int main() {
	int p,id;
	string name;
	
	cout<<"Enter machine Id :: "<<endl;
	cin>>id;
	
	cout<<"Enter machine Name :: "<<endl;
	cin>>name;
	
	cout<<"Enter machine Price :: "<<endl;
	cin>>p;
    Machine machine1(id,name,p);
    Machine machine2 = machine1;

    cout << "Details of Machine 1:" << endl;
    machine1.display();

    cout << endl << "Details of Machine 2:" << endl;
    machine2.display();

    return 0;
}

