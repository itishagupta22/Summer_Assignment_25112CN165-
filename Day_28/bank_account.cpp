#include <iostream>
using namespace std;

int main() {
    int accountNo, choice;
    string name;
    float balance, amount;

    cout << "Enter Account Number: ";
    cin >> accountNo;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << " BANK MENU " << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Current Balance = " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Updated Balance = " << balance;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Updated Balance = " << balance;
            }
            else {
                cout << "Insufficient Balance";
            }
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}