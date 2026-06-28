#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    string name[n];
    string phone[n];
    string email[n];
    for (int i = 0; i < n; i++) {
        cout << "\nContact " << i + 1 << endl;

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Phone Number: ";
        cin >> phone[i];

        cout << "Enter Email: ";
        cin >> email[i];
    }
    cout << "\nContact List\n";

    for (int i = 0; i < n; i++) {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name         : " << name[i] << endl;
        cout << "Phone Number : " << phone[i] << endl;
        cout << "Email        : " << email[i] << endl;
    }

    return 0;
}