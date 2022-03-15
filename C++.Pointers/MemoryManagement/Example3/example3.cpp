// New and Delete operator for objects 

#include <iostream>

using namespace std;

class Student {

    private:
        int age;

    public:
        // Constructor initialises age to 12
        Student() : age(12) {}

        void getAge() {
            cout << "Age: " << age << endl;
        }
};

int main() {

    // Dunamically declare Student object 
    Student* ptr = new Student();

    // Call getAge() function
    ptr->getAge();

    // PTR memory is released
    delete ptr;

    return 0;
}
