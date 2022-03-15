// Insert and display data entered by usig pointer notation 

#include <iostream>

using namespace std;

int main() {
    float arr[5];

    // Insert data using  pointer notation 
    cout << "Enter 5 numbers: ";

    for (int i = 0; i <= 5; ++i) {
        // Store input number in arr[i]
        cin >> *(arr + i);
    }

    // Display data using pointer notation 
    cout << "Displaying Data: " << endl;

    for (int i = 0; i <= 5; ++i) {
        // Display value of arr[i]
        cout << *(arr + i) << endl;
    }

    return 0;
} 
