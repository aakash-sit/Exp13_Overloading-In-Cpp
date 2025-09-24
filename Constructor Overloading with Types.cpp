// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

class Fetch {
private:
    int a, b; // Encapsulation: data kept private

public:
    // Default Constructor
    Fetch() {
        a = 3;
        b = 4;
        cout << "[Default Constructor called]\n";
    }

    // Parameterized Constructor
    Fetch(int m, int n) {
        a = m;
        b = n;
        cout << "[Parameterized Constructor called]\n";
    }

    // Copy Constructor
    Fetch(const Fetch &obj) {
        a = obj.a;
        b = obj.b;
        cout << "[Copy Constructor called]\n";
    }

    // Destructor
    ~Fetch() {
        cout << "[Destructor called for object with values: a=" 
             << a << ", b=" << b << "]\n";
    }

    // Display Function
    void disp() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    // Object creation
    Fetch f1;          // Default constructor
    Fetch f2(10, 20);  // Parameterized constructor
    Fetch f3(f2);      // Copy constructor
    Fetch f4(f1);      // Copy constructor

    // Displaying values
    cout << "\n--- Object f1 ---" << endl;
    f1.disp();

    cout << "\n--- Object f2 ---" << endl;
    f2.disp();

    cout << "\n--- Object f3 (Copy of f2) ---" << endl;
    f3.disp();

    cout << "\n--- Object f4 (Copy of f1) ---" << endl;
    f4.disp();

    cout << "\n[Program ending... destructors will now be called automatically]\n";

    return 0;
}
