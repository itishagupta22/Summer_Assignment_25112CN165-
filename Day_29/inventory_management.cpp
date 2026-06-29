#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    int productID[n], quantity[n];
    string productName[n];
    float price[n];

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;

        cout << "Enter Product ID: ";
        cin >> productID[i];

        cout << "Enter Product Name: ";
        cin >> productName[i];

        cout << "Enter Quantity: ";
        cin >> quantity[i];

        cout << "Enter Price: ";
        cin >> price[i];
    }
    cout << "\nInventory Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;
        cout << "Product ID   : " << productID[i] << endl;
        cout << "Product Name : " << productName[i] << endl;
        cout << "Quantity     : " << quantity[i] << endl;
        cout << "Price        : " << price[i] << endl;
    }

    return 0;
}