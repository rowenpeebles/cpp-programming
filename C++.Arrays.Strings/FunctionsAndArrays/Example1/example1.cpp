// Passing one-dimensional array to a function

#include <iostream>

using namespace std;

// Declare function to display marks
void displayArray(int m[5]) {
    cout << "Displaying marks: " << endl;

    // Displaying array elements 
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {
    // Declare and initialise an array
    int marks[5] = {88, 76, 90, 61, 69};

    // Call display function passing array as argument 
    displayArray(marks);

    return 0;
}
