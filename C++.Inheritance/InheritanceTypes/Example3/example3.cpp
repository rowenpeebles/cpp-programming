// Hierarchical Inheritance 

#include <iostream>

using namespace std;

// Base class 
class Animal {
    public:
        void info() {
            cout << "I am an animal" << endl;
        }
};

// Derived class 1
class Dog : public Animal {
    public:
        void bark() {
            cout << "I am a dog, woof woof" << endl;
        }
};

// Derived class 2
class Cat : public Animal {
    public:
        void meow() {
            cout << "I am a cat, meow meow" << endl;
        }
};

int main() {
    // Create object of Dog class
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info();
    dog1.bark();

    // Create object of Cat class 
    Cat cat1;
    cout << "Cat Class:" << endl;
    cat1.info(); // Parent class function
    cat1.meow();

    return 0;
}
