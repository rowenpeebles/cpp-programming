// Automatic conversion from Double to Int

// Working of implicit type-conversion

#include<iostream>

using namespace std;

int main() {

    int num_int;
    double num_double = 9.99;

    // Implicit conversion
    // Assigning a double value to an int variable
    num_int = num_double;

    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    return 0;

}
