#include <iostream>

using namespace std;

// Global variable
int num;

// Function declaration
int& test();

int main() {
    // Assign 5 to num variable
    // Equivalent to num = 5;
    test() = 5;

    cout << num;

    return 0;
}

// Function definition
// Returns the address of num variable 
int& test() {
    return num;
}
