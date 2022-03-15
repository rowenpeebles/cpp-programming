// Program to demonstrate the use of virtual functions

#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
        string type;

    public:
        // Constructor to initialise type 
        Animal() : type("Animal") {}

        // Declare virtual function 
        virtual string getType() {
            return type;
        }
};

class Dog : public Animal {
    private:
        string type;

    public:
        // Constructor to initialise type 
        Dog() : type("Dog") {}

        string getType() override {
            return type;
        }
};

class Cat : public Animal {
    private:
        string type;

    public:
        // Constructor to initialise type 
        Cat() : type("Cat") {}

        string getType() override {
            return type;
        }
};

void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

int main() {
    Animal* animal1 = new Animal();
    Animal* dog1 = new Dog();
    Animal* cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;
}
