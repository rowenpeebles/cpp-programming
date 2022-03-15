#include <iostream>

using namespace std;

int main() {

    int number;
    int sum = 0;

    // Nested for loops

    // First loop
    for (int i = 1; i <= 3; ++i) {

        // Second loop 
        for (int j = 1;j <= 3; ++j) {

            if (j == 2) {

                continue;
            }

            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}
