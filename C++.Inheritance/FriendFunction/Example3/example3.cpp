// Demonstrate the working of friend class

#include <iostream>

using namespace std;

// Forward declaration 
class ClassB;

class ClassA {
    private:
        int numA;

        // Friend class declaration 
        friend class ClassB;

    public:
        // Constructor to initialise numA to 12
        ClassA() : numA(12) {};
};

class ClassB {
    private:
        int numB;

    public:
        // Constructor to initialise numB to 1
        ClassB() : numB(1) {}
        
        // Member function to add numA
        // from ClassA and numB from ClassB 
        int add() {
            ClassA objectA;
            return objectA.numA + numB;
        }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}
