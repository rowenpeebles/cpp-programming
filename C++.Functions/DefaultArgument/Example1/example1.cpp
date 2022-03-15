#include <iostream>

using namespace std;

// Defining the default arguments
void display(char = '*', int =3);

int main() {

    int count = 5;

    cout << "No argument passed: ";

    // *, 3 will be parameters
    display();

    cout << "First argument passed: ";
    // #, 3 will be the parameters 
    display('#');

    cout << "Both arguments passed: ";
    // $, 5 will be the parameters 
    display('$', count);

    return 0;
}

void display(char c, int count) {
    
    for(int i = 1; i <= count; ++i) {
        cout << c;
    }

    cout << endl;
}
