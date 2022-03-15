// Dynamic Memory Allocation 

#include <iostream>

using namespace std;

int main() {
    // Declare an int pointer
    int* pointInt;

    // Declare a float pointer 
    float* pointFloat;

    // Dynamically allocate memory 
    pointInt = new int;
    pointFloat = new float;

    // Assigning value to the memory 
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // Deallocate the memory 
    delete pointInt;
    delete pointFloat;

    return 0;
}
