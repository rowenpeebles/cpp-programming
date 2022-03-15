/* Program to illistrate the working of
 * objects and class in C++ Programming */

#include <iostream>

using namespace std;

// Create a class
class Room {

    public:
        double length;
        double breadth;
        double height;

        double calculateArea() {
            return length * breadth;
        }

        double calculateVolume() {
            return length * breadth * height;
        }
};

int main() {

    // Create object of Room class
    Room room1;

    // Assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // Calculate and display the area and volume
    cout << "Area of room: " << room1.calculateArea() << endl;
    cout << "Volume of room: " << room1.calculateVolume() << endl;

    return 0;
}
