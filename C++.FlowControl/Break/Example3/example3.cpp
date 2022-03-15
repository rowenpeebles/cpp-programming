// Using break statement inside
// nested for loop 

#include <iostream>

using namespace std;

int main() {

    int number;
    int sum = 0;

    // Nested for loops

    // First for loop
    for (int i = 1; i <= 3; ++i) {

        // Second loop
        for (int j = 1; j <= 3; ++j) {

            if (i == 2) {

                break;
            }

            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}
