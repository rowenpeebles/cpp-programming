#include <iostream>

using namespace std;

void test();

int main() {

    // Local variable to main()
    int var = 5;

    test();

    // Illegal: var1 not declared inside main() 
    var1 = 9;

}

void test() {

    // Local variable to test() 
    int var1;

    var1 = 6;

    // Illegal: var not declared inside test() 
    cout << var;

}

// The variable 'var' cannot be used inside 
// test() and 'var1' cannot be used inside 
// main().
