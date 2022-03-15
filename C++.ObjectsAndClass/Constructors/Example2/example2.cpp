// calculate the area of a wall

#include <iostream>

using namespace std;

// Declare a class
class Wall {

    private:
        double length;
        double height;

    public:
        // Parameterised constructor to initialise variables
        Wall(double len, double hgt) {
            length = len;
            height = hgt;
        }

        double calculateArea() {
            return length * height;
        }
};

int main() {
    // Create object and initialise data members 
    Wall wall1(10.5, 8.6);
    Wall wall2(8.5, 6.3);

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}
