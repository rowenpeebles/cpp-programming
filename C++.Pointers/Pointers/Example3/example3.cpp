// Changing Value Pointed by Pointers 

#include <iostream>

using namespace std;

int main() {
    int var = 5;
    int* pointVar;

    // Store address of var 
    pointVar = &var;

    // Print var 
    cout << "Var: " << var << endl;

    // Print *pointVar 
    cout << "*pointVar: " << *pointVar << endl << endl;

    cout << "Changing value of var to 7: " << endl << endl;

    var = 7;

    //Print var 
    cout << "Var: " << var << endl;

    // Print pointVar 
    cout << "*pointVar: " << *pointVar << endl;
    
    return 0;
}
