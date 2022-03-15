// Working of friend Function

#include <iostream>

using namespace std;

class Distance {
    private:
        int meter;

        // Friend function 
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
};

// Friend function definition 
int addFive(Distance d) {
    // Accessing private members from the friend function 
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}