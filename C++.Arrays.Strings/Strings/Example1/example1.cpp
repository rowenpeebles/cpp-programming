// C++ program to display string entered by user

#include <iostream>

using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
 
    return 0;
}
