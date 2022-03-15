#include <iostream>

using namespace std;

void prime();

int main() {
    // No argument is passed to prime()
    prime();
    return 0;
}

// Return type if function is void because value is not returned
void prime() {
    int num, i, flag = 0;

    cout << "Enter a positive integer to check: ";
    cin >> num;

    for (i =2; i <= num / 2; ++i) {

        if (num % i == 0) {

            flag = 1;

            break;

        }

    }

if (flag == 1) {
