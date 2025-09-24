// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

class Purchase {
private:
    string productName;
    int unitPrice;
    int quantity;

public:
    // Constructor with initializer list
    Purchase(const string &name, int price, int qty)
        : productName(name), unitPrice(price), quantity(qty) {}

    // Function to calculate total price
    int totalPrice() const {
        return unitPrice * quantity;
    }

    // Overloading + operator (adds total prices of two purchases)
    int operator+(const Purchase &p) const {
        return this->totalPrice() + p.totalPrice();
    }

    // Overloading << operator for output
    friend ostream& operator<<(ostream &out, const Purchase &p) {
        out << "🛒 Product Name : " << p.productName << "\n";
        out << "📦 Quantity     : " << p.quantity << "\n";
        out << "💲 Unit Price   : " << p.unitPrice << "\n";
        out << "💳 Total Price  : " << p.totalPrice() << "\n";
        out << "-----------------------------\n";
        return out;
    }
};

int main() {
    Purchase p1("Shoes", 500, 2);  // 500 * 2 = 1000
    Purchase p2("Pen", 20, 5);     // 20 * 5 = 100

    // Display purchases using overloaded << operator
    cout << p1;
    cout << p2;

    // Add purchases using overloaded + operator
    int combined = p1 + p2;
    cout << "✅ Combined Total : " << combined << endl;

    return 0;
}
