// Program to find the sum of positive numbers
// if the user enters a negative number, break
// ends the loop. The negative number is not
// added to the loop.

#include <iostream>

using namespace std;

int main() {

    int number;
    int sum = 0;

    while (true) {

        // Take input from the user
        cout << "Enter a number: ";
        cin >> number;

        // Break condition
        if (number < 0) {

            break;
        }

        // Add all positive numbers
        sum += number;
    }

    // Display the sum
    cout << "The sum is " << sum << endl;

    return 0;
}
