// Printing variable addresses

#include <iostream>

using namespace std;

int main() {
    // Declare variables 
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // Print address of var1 
    cout << "Address of Var1: " << &var1 << endl;

    // Print address of var2 
    cout << "Address of Var2: " << &var2 << endl;
    
    // Print address of var3 
    cout << "Address of Var3: " << &var3 << endl;

    return 0;
}
