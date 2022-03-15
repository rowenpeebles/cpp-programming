// Conversion from Int to Double

// Working of implicit type-conversion

#include <iostream>

using namespace std;

int main() {

    // Assigning an int value to num_int
    int num_int = 9;

    // Declaring a double type variable
    double num_double;

    // Impliciit conversion
    // Assigning int value to a double variable
    num_double = num_int;

    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    return 0;

}
