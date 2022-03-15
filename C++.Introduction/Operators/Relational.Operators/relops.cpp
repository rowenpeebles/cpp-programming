#include <iostream>

using namespace std;

int main() {

    int a, b;

    a = 3;
    b = 5;
    
    bool result;

    result = (a == b); // False
    cout << "3 == 5 is " << result << endl;
    
    result = (a != b); // True
    cout << "3 != 5 is " << result << endl;

    result = a > b; // False
    cout << "3 > 5 is " << result << endl;

    result = a < b; // True
    cout << "3 < 5 is " << result << endl;

    result = a >= b; // False
    cout << "3 >= 5 is " << result << endl;

    result = a <= b; // True
    cout << "3 <= 5 is " << result << endl;
    
    return 0;

}
