// The working of protected inheritance

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

class ProtectedDerived : protected Base {

    public:
        // Function to access protected member from Base 
        int getPROT() {
            return prot;
        }

        // Function to access public member form Base 
        int getPUB() {
            return pub;
        }
};

int main() {

    ProtectedDerived object1;

    cout << "Private cannot be accessed.." << endl;
    cout << "Protected: " << object1.getPROT() << endl;
    cout << "Public: " << object1.getPUB() << endl;
    
    return 0;
}
