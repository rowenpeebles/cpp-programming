// Return value from operator function (++operator)

#include <iostream>

using namespace std;

class Count {
    private:
        int value;

    public:
        // Constructor to initialise count to 5 
        Count() : value(5) {}

        // Overload __ when used as prefix
        Count operator ++ () {
            Count temp;
            
            // Here, value is the value attribute of the calling object 
            temp.value = ++value;

            return temp;
        }

        // Overload ++ when used as postfix 
        Count operator ++ (int) {
            Count temp;

            // Here, value is the value attribute of the calling object 
            temp.value = value++;

            return temp;
        }

        void display() {
            cout << "Count: " << value << endl;
        }
};

int main() {
    Count count1, result;

    // Call the "Count operator ++ ()" function
    result = ++count1;
    result.display();

    // Call the "Count operator ++ (int)" function 
    result = count1++;
    result.display();

    return 0;
}
