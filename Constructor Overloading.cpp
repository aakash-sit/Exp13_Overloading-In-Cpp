// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

class Fetch {
private:
    int a, b; // Encapsulation: keep data members private

public:
    // Default Constructor
    Fetch() : a(0), b(0) {
        cout << "[Default Constructor called]\n";
    }

    // Parameterized Constructor (1 argument)
    Fetch(int m) : a(m), b(0) {
        cout << "[Constructor with 1 parameter called]\n";
    }

    // Parameterized Constructor (2 arguments)
    Fetch(int m, int n) : a(m), b(n) {
        cout << "[Constructor with 2 parameters called]\n";
    }

    // Display Function
    void disp() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    // Constructor overloading demonstration
    Fetch f1;         // Calls default constructor
    Fetch f2(5);      // Calls constructor with 1 parameter
    Fetch f3(2, 3);   // Calls constructor with 2 parameters

    cout << "\n--- Object f1 ---" << endl;
    f1.disp();

    cout << "\n--- Object f2 ---" << endl;
    f2.disp();

    cout << "\n--- Object f3 ---" << endl;
    f3.disp();

    return 0;
}
