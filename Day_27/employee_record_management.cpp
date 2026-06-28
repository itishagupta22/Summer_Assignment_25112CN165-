#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int id[n];
    string name[n];
    float salary[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> id[i];

        cout << "Enter Employee Name: ";
        cin >> name[i];

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID   : " << id[i] << endl;
        cout << "Employee Name : " << name[i] << endl;
        cout << "Salary        : " << salary[i] << endl;
    }

    return 0;
}