// New and delete operator for Arrays 

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;

    // Memory allocation of num number of floats 
    ptr = new float[num];

    cout << "Enter GPA of students: " << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    
    cout << "\nDisplaying GPA of students: " << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // PTR memory is released
    delete[] ptr;

    return 0;
}
