// Demonstrate the use of default constructor

#include <iostream>

using namespace std;

// Declare a class
class Wall {

    private:
        double length;

    public:
        // Default constructor to initialise variable
        Wall() {
            cout << "Enter the length: ";
            cin >> length;
            cout << "Creating a wall." << endl;
            cout << "Length = " << length << endl;
        }
};

int main() {
    Wall wall1;

    return 0;
}
