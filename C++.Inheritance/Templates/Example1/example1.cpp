// Demonstrate class templates 

#include <iostream>

using namespace std;

// Class templates 
template <class T>
class Number {
    private:
        // Variable of type T
        T num;

    public: 
        Number(T n) : num(n) {} // Constructor 
        
        T getNum() {
            return num;
        }
};

int main() {
    // Create object with int type 
    Number<int> numberInt(7);

    // Create object with double type 
    Number<double> numberDouble(7.7);

    cout << "Int Number: " << numberInt.getNum() << endl;
    cout << "Double Number: " << numberDouble.getNum() << endl;

    return 0;
}
