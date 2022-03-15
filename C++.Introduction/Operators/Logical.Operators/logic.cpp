#include <iostream>

using namespace std;

int main() {

    bool result;

    result = (3 != 5) && (3 < 5); // True
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5); // False
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5); // False
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5); // True
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5); // True
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5); // False
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2); // True
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5); // False
    cout << "!(5 == 5) is " << result << endl;

    return 0;

}
