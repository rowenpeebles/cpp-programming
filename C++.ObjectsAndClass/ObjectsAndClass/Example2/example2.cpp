/* Program to illustrate the working of
 * public and private in C++ Class */

#include <iostream>

using namespace std;

class Room {

    private:
        double length;
        double breadth;
        double height;

    public:
        // Function to initialise private variables
        void initData(double len, double brth, double hgt) {
            length = len;
            breadth = brth;
            height = hgt;
        }

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

    // Pass the values of provate variables as parameters 
    room1.initData(42.5, 30.8, 19.2);

    cout << "Area of Room: " << room1.calculateArea() << endl;
    cout << "Volume of Room: " << room1.calculateVolume() << endl;

    return 0;
}
