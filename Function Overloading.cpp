// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

// Function Overloading: Same name, different parameters

// CART view
void purchase(const string &productName, int quantity) {
    cout << "🛒 CART VIEW\n";
    cout << "Product Name : " << productName << "\n";
    cout << "Quantity     : " << quantity << "\n";
    cout << "-----------------------------\n";
}

// CHECKOUT view
void purchase(const string &productName, int unitPrice, int quantity) {
    int totalPrice = unitPrice * quantity;

    cout << "💳 CHECKOUT VIEW\n";
    cout << "Product Name : " << productName << "\n";
    cout << "Quantity     : " << quantity << "\n";
    cout << "Unit Price   : " << unitPrice << "\n";
    cout << "Total Price  : " << totalPrice << "\n";
    cout << "-----------------------------\n";
}

int main() {
    string productName;
    int unitPrice, quantity;

    // Input
    cout << "Enter Product Name, Quantity, and Unit Price: ";
    cin >> productName >> quantity >> unitPrice;

    // Function calls
    purchase(productName, quantity);             // Calls 2-arg function
    purchase(productName, unitPrice, quantity);  // Calls 3-arg function

    // Hardcoded examples
    purchase("Pen", 5);              // Cart view
    purchase("Notebook", 50, 2);     // Checkout view

    return 0;
}

