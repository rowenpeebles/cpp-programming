// Add members of two different classes using friend functions 

#include <iostream>

using namespace std;

// Forward declaration
class ClassB;

class ClassA {
    public:
        // Constructor to initialise numA to 12
        ClassA() : numA(12) {}

    private:
        int numA;

        // Friend function declaration 
        friend int add(ClassA, ClassB);
};

class ClassB {
    public:
        // Constructor to initialise numB to 1
        ClassB() : numB(1) {}

    private:
        int numB;

        // Friend function declaration
        friend int add(ClassA, ClassB);
};

// Access both members of both classes 
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
