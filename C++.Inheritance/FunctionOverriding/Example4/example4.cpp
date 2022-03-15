// Access overridden function using pointer of
// base type that points too an object of Derived class

#include <iostream>

using namespace std;

class Base {
    public:
        void print() {
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {
    Derived derived1;

    // Pointer of Base type that points to derived1 
    Base* ptr = &derived1;

    // Call function of Base class using ptr;
    ptr->print();
    
    return 0;
}
