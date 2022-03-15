#include <iostream>

using namespace std;

int add(int, int);

int main() {
    int sum;

    // Calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

int add(int a, int b) {
    return (a + b);
}
