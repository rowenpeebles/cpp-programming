// The working of public inheritance 

#include <iostream>

using namespace std;

class Base {

    private:
        int pvt = 1;

    protected:
        int prot = 2;

    public:
        int pub = 3;

        // Function to access private member 
        int getPVT() {
            return pvt;
        }
};

class PublicDerived : public Base {

    public:
        // Function to access protected member from Base 
        int getPROT() {
            return prot;
        }
};

int main() {

    PublicDerived object1;

    cout << "Private: " << object1.getPVT() << endl;
    cout << "Protected: " << object1.getPROT() << endl;
    cout << "Public: " << object1.pub << endl;

    return 0;
}
