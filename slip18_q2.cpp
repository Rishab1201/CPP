#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string Name;
    string Editor;
    float Price;
public:
    virtual void accept() = 0; // pure virtual function
    virtual void display() = 0; // pure virtual function
};

class NewsPaper : public Media {
private:
    int No_of_Pages;
public:
    void accept() {
        cout << "Enter Newspaper Name: ";
        cin>>Name;
        
        cout<<"\n";
        
        cout << "Enter Editor's Name: ";
        cin>>Editor;
        
        cout<<"\n";
        
        cout << "Enter Price: ";
        cin >> Price;
        
        cout<<"\n";
        
        cout << "Enter Number of Pages: ";
        cin >> No_of_Pages;
        
        cout<<"\n";
    }
    void display() {
    	cout<<"\n";
    	
        cout << "\nNewspaper Name: " << Name << endl;
        cout << "\nEditor's Name: " << Editor << endl;
        cout << "\nPrice: " << Price << endl;
        cout << "\nNumber of Pages: " << No_of_Pages << endl;
    }
};

class Magazine : public Media {
private:
    string Category;
public:
    void accept() {
        cout << "Enter Magazine Name: ";
        cin>>Name;
        
        cout<<"\n";
        
        cout << "Enter Editor's Name: ";
        cin>>Editor;
        
        cout<<"\n";
        
        cout << "Enter Price: ";
        cin >> Price;
        
        cout<<"\n";
    }
    void display() {
    	
    	cout<<"\n";
    	
        cout << "\nMagazine Name: " << Name <<endl;
        cout << "\nEditor's Name: " << Editor << endl;
        cout << "\nPrice: " << Price << endl;
        cout << "\nCategory: " << Category << endl;
        
        cout<<"\n";
    }
};

int main() {
    Media *M;
    NewsPaper N;
    Magazine M1;
    M = &N;
    
    M->accept();
    M->display();
    M = &M1;
    
    M->accept();
    M->display();
    return 0;
}

