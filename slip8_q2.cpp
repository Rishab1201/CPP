#include <iostream>
#include <cstring>

using namespace std;

class Vector {
private:
    int size;
    int* ptr;
public:
    Vector(int s) {
        size = s;
        ptr = new int[size];
    }
    Vector(const Vector& v) {
        size = v.size;
        ptr = new int[size];
        memcpy(ptr, v.ptr, size * sizeof(int));
    }
    void accept() {
        cout << "Enter " << size << " elements of vector: ";
        for (int i = 0; i < size; i++) {
            cin >> ptr[i];
        }
    }
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << ptr[i];
            if (i < size - 1) {
                cout << ",";
            }
        }
        cout << ")" << endl;
    }
    Vector operator+(const Vector& v) {
        Vector u(size);
        for (int i = 0; i < size; i++) {
            u.ptr[i] = ptr[i] + v.ptr[i];
        }
        return u;
    }
    ~Vector() {
        delete[] ptr;
    }
};

int main() {
    int size;
    cout << "Enter size of vectors: ";
    cin >> size;

    Vector v1(size);
    v1.accept();

    Vector v2(size);
    v2.accept();

    Vector u = v1 + v2;
    cout << "Union of vectors: ";
    u.display();

    return 0;
}

