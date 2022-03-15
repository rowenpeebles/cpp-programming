#include <iostream>

using namespace std;

// Defining the default arguments 
void display(char c = '*', int count = 3) {
    
    for (int i = 1; i <= count; ++i) {
       
        cout << c;

    }

    cout << endl;
}

int main() {

    int count = 5;
    
    cout << "No arguments passed: ";
    // *, 3 will be parameters
    display();

    cout << "First agument passed: ";
    // #, 3 will be parameters 
    display('#');

    cout << "Both argument passed: ";
    // $, 5 will be parameters 
    display('$', count);

    return 0;
}
