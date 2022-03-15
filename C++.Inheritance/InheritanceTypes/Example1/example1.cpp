// Multilevel Inheritance

#include <iostream>

using namespace std;

class A {
    public:
        void display() {
            cout << "Base Class Content" << endl;
        }
};

class B : public A {};

class C : public B {};

int main() {
    C obj;
    obj.display();
    return 0;
}
