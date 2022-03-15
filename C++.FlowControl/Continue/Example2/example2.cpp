// Progrm to calculate positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation

#include <iostream>

using namespace std;

int main() {

    int sum = 0;
    int number = 0;

    while (number >= 0) {

        // Add all positive numbers
        sum += number;

        // Take input from the user
        cout << "Enter a number: ";
        cin >> number;

        // Continue condition
        if (number > 50) {

            cout << "The number is greater than 50 and won't be calculated."
                << endl;
            number = 0; // The value of number is set to 0 again

            continue;
        }
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
