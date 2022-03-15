// Working of C++ Pointers 

#include <iostream>

using namespace std;

int main() {
    int var = 5;

    // Declare pointer variable 
    int* pointVar;

    // Store address of var 
    pointVar = &var;

    // Print value of var 
    cout << "Value of Var: " << var << endl;

    // Print address of var 
    cout << "Address of Var: " <<  &var << endl;

    // Print pointer of var 
    cout << "Pointer of Var: " << pointVar << endl;

    // Print the content of the address pointVar points to 
    cout << "Content of the address pointed to by pointVar: " << *pointVar << endl;

    return 0;
}
