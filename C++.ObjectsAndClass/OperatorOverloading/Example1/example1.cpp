// Unary Operator Overloading 

// Overload ++ when used as a prefix 

#include <iostream>

using namespace std;

class Count {

    private:
        int value;

    public:
        // Constructor to initialise count to 5
        Count() : value(5) {}

        // Overload ++ when used as a prefix 
        void operator ++ () {
            ++value;
        }

        void display() {
            cout << "Count: " << value << endl;
        }
};

int main() {
    Count count1;

    // Call the "void opeator ++ ()" function 
    ++count1;

    count1.display();

    return 0;
}
