// Passing structure to a function

#include <iostream>

using namespace std;

struct Person  {
    char name[50];
    int age;
    float salary;
};

void displayData(Person); // Function declaration

int main() {
    Person p;

    cout << "Enter Name: ";
    cin.get(p.name, 50);

    cout << "Enter Age: ";
    cin >> p.age;

    cout << "Enter Salary: ";
    cin >> p.salary;

    // Function to call with structure variable as argument
    displayData(p);

    return 0;
}

void displayData(Person p) {
    cout << "\nDisplaying Information.." << endl;

    cout << "\nName: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}
