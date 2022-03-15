#include <iostream>

using namespace std;

// Function with 2 parameters
void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// Function with double type single parameter 
void display(double var) {
    cout << "Double number: " << var << endl;
}

// Function with int type single parameter 
void display(int var) {
    cout << "Integer numer: " << var << endl;
}

int main() {
    int a = 5;
    double b = 5.5;

    // Call function with int type parameter 
    display(a);

    // Call function with double type parameter 
    display(b);

    // Call function with 2 parameters 
    display(a, b);

    return 0;
}
