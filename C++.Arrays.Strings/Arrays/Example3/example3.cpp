/* Display sum and average of
 * array using for loop */

#include <iostream>

using namespace std;

int main() {
    // Initialise an array without specifying size
    double numbers[] = {7, 5, 6, 12, 35, 27};

    double sum = 0;
    double count = 0;
    double average;

    cout << "The numbers are: ";

    // Print array elements
    // use of range-based for loop
    for (const double &n : numbers) {
        cout << n << " ";

        // Calculate the sum
        sum += n;

        // Count the no. of array elements 
        ++count;
    }

    // Print the sum 
    cout << "\nTheir Sum = " << sum << endl;

    // Find the average 
    average = sum / count;
    cout << "Their Average = " << average << endl;

    return 0;
}
